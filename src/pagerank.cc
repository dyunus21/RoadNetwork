#include "pagerank.hpp"
std::vector<int> pagerank::pagerank_ranks(std::vector<std::vector<int> > graph) {
    std::vector<std::vector<int> > new_graph = adjustMatrix(graph);
    return new_graph[0];
}

std::vector<std::vector<int> > pagerank::adjustMatrix(std::vector<std::vector<int> > graph) {
    std::vector<std::vector<int> > new_graph = graph;
    std::vector<int> sums;
    // for (size i = 0; i < graph[0].size(); i++) {
    // }
    return new_graph;
}
