#include <stdlib.h>

std::vector<float> pagerank::pagerank_ranks(std::vector<std::vector<float>> graph) {
    std::vector<std::vector<float>> new_graph = adjustMatrix(graph);
    int N = new_graph[0].size();
    std::vector<std::vector<float>>;
    // create vector of length N with floats from 0 to 1
    for (int i = 0; i < N; i++) {
        ranks.push_back(std::vector<float>(RAND_MAX + 1.0));
    }
    // calculates sum(abs(x)): norm of vector N
    int norm = 0; 
    for (int i = 0; i < N; i++) {
        if (ranks[i][0] < 0) {
            norm -= ranks[i][0];
        } else {
            norm += ranks[i][0];
        }
    }

    // calculates M_hat = (d * M + (1 - d) / N)
    std::vector<std::vector<float>> new_graph_hat;
    for (int i = 0; i < graphs.size(); i++) {
        std::vector<float> row;
        for (int j = 0; j < graphs[0].size(); j++) {
            float new_val = (0.85 * graphs[i][j] + (1 - 0.85) / N);
            row.push_back(new_val);
        }
        new_graph_hat.push_back(row);
    }

    // iterate through ten times
    for (int i = 0; i < 10; i++) {
        // ranks = M_hat @ v
        int r1 = new_graph_hat.size(); 
        int c1 = new_graph_hat[0].size();
        for (int j = 0; j < r1; j++) {
            for (int k = 0; k < N; k++) {
                for (int l = 0; l < c1; l++) {
                    ranks[j][k] += new_graph_hat[j][l] * ranks[l][k];
                }
            }
        }
    }

    return ranks;
}
std::vector<std::vector<float>> pagerank::adjustMatrix(std::vector<std::vector<float>> graph) {
    std::vector<std::vector<float>> new_graph;
    std::vector<int> sums(graph[0].size(), 0);      // sum of each column
    for (int j = 0; j < graph.size(); j++) {
            sums[i] += graph[j][i];
        }
    }
    for (int i = 0; i < graph.size(); i++) {
        for (int j = 0; j < graph[0].size(); j++) {
            if (sums[j] == 0) {
                new_graph[i][j] = 0;
            } else {
                new_graph[i][j] = graph[i][j]/sums[j];
            }
        }
    }
    return new_graph;
} 
