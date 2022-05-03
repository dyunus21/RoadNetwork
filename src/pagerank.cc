#include <stdlib.h>
#include "pagerank.hpp"
#include <iostream>

/* this function performs the pagerank algorithm
    @param graph: the intitial adjacency matrix
    @return the ranks of each node as an N by 1 vector
*/
std::vector<float> pagerank::pagerank_ranks(std::vector<std::vector<double> > graph)
{
    std::vector<std::vector<double> > new_graph = adjustMatrix(graph);
    int N = new_graph[0].size();
    std::vector<float> ranks;
    // create vector of length N with floats from 0 to 1
    for (int i = 0; i < N; i++)
    {
        ranks.push_back((float)rand() / RAND_MAX);
    }
    // calculates sum(abs(x)): norm of vector N
    float norm = 0;
    for (int i = 0; i < N; i++)
    {
        norm += ranks[i];
        // std::cout << norm << std::endl;
    }
    for (size_t i = 0; i < ranks.size(); i++)
    {
        ranks[i] /= norm;
    }
    // calculates M_hat = (d * M + (1 - d) / N)
    std::vector<std::vector<float> > new_graph_hat;
    for (int i = 0; i < (int)new_graph.size(); i++)
    {
        std::vector<float> row;
        for (int j = 0; j < (int)new_graph[0].size(); j++)
        {
            float new_val = (0.85 * new_graph[i][j] + (1 - 0.85) / N);
            row.push_back(new_val);
        }
        new_graph_hat.push_back(row);
    }
    // iterate through ten times
    // for (int k = 0; k < 10; k++)
    // {
    std::vector<float> result(ranks.size(), 0);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < (int)ranks.size(); j++)
        {
            result[i] += new_graph_hat[i][j] * ranks[i];
        }
    }
    ranks = result;
    // }

    return ranks;
}

/* this function ensures that the columns of the entire adjacency matrix sum up to one (helper for pagerank alg)
    @param graph: the intitial adjacency matrix
    @return the adjusted adjacency matrix
*/
std::vector<std::vector<double> > pagerank::adjustMatrix(std::vector<std::vector<double> > graph)
{
    std::vector<std::vector<double> > new_graph(graph.size(), std::vector<double>(graph.size(), 0));
    std::vector<int> sums(graph[0].size(), 0); // sum of each column
    for (int j = 0; j < (int)graph.size(); j++)
    {
        for (int i = 0; i < (int)graph[0].size(); i++)
        {
            if (graph[i][j] != 0)
            {
                sums[i]++;
            }
        }
    }
    for (int i = 0; i < (int)graph.size(); i++)
    {
        for (int j = 0; j < (int)graph[0].size(); j++)
        {
            if (sums[j] == 0)
            {
                new_graph[i][j] = 0;
            }
            else
            {
                new_graph[i][j] = 1 / sums[j];
            }
        }
    }
    return new_graph;
}
