#pragma once

#include <vector>
#include <algorithm>

class pagerank {
    public:
        std::vector<int> pagerank_ranks(std::vector<std::vector<int> > graph);
    private:
        std::vector<std::vector<int> > adjustMatrix(std::vector<std::vector<int> > graph);
};
