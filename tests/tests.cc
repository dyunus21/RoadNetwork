#include "catch.hpp"
#include "../src/roadnetwork.hpp"
#include "../src/dijkstras.hpp"
#include "../src/pagerank.hpp"
#include <iostream>

// Compares output and actual results
bool checkResult(std::vector<float> out, std::vector<float> result) {
    for(size_t i =0; i<result.size();i++) {
        if(out[i]!=result[i])
            return false;
    }
    return true;
}

// Checks Adjacency Matrix
TEST_CASE("Check Adjacency Matrix", "[Adj_Matrix]") {
    roadNetwork road = roadNetwork();
    std::vector<std::vector<double> > adj = road.getAdjacencyMatrix();

    REQUIRE(adj[2][3] ==0) ;
    REQUIRE(adj[3][2] ==0) ;
    REQUIRE(adj[3][4] ==2) ;
    REQUIRE(adj[4][3] ==2) ;
    REQUIRE(adj[10][12] ==24); 
    REQUIRE(adj[12][10] ==24) ;

}

// Tests functionality of Dijkstras Algorithm
TEST_CASE("Check Dijkstras Algorithm","[Dijkstra]") {
    std::vector<std::vector<double> > graph= { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                                            { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                                            { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                                            { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                                            { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                                            { 0, 0, 4, 0, 10, 0, 2, 0, 0 },
                                            { 0, 0, 0, 14, 0, 2, 0, 1, 6 },
                                            { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                                            { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
    dijkstras d;
    std::vector<float> out = d.dijkstra_path(graph,0);
    std::vector<float> result = {0,4,12,19,21,11,9,8,14};
    REQUIRE(checkResult(out,result)==true);

    // checks nodes without valid path
    out = d.dijkstra_path(graph,7);
    result = {-1,-1,-1,-1,-1,-1,-1,0,7};
    REQUIRE(checkResult(out,result)==true);
}

// Tests functionality for PageRank Algorithm
TEST_CASE("PageRank Test","[PageRank]") {
    std::vector<std::vector<double> > graph = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                                            { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                                            { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                                            { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                                            { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                                            { 0, 0, 4, 0, 10, 0, 2, 0, 0 },
                                            { 0, 0, 0, 14, 0, 2, 0, 1, 6 },
                                            { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                                            { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
    pagerank pgrank;
    std::vector<float> result = pgrank.pagerank_ranks(graph);
    int maxIndex = std::max_element(result.begin(), result.end()) - result.begin();
    REQUIRE(maxIndex == 2);
}