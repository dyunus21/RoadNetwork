#pragma once

#include <vector>
#include <algorithm>

class pagerank {
    public:
        std::vector<std::vector<float> > pagerank_ranks(std::vector<std::vector<float> > graph);
    private:
        std::vector<std::vector<float> > adjustMatrix(std::vector<std::vector<float> > graph);
};
