#pragma once

#include <vector>
#include <algorithm>

class pagerank {
    public:
        std::vector<int> pagerank(std::vector<std::vector<int>> graph, int start);
    private:
        std::vector<std::vector<int>> adjustMatrix(std::vector<std::vector<int>> graph);
};