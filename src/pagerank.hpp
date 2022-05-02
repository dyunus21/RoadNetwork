#pragma once

#include <vector>
#include <algorithm>

class pagerank
{
public:
    std::vector<float> pagerank_ranks(std::vector<std::vector<double> > graph);

private:
    std::vector<std::vector<double> > adjustMatrix(std::vector<std::vector<double> > graph);
};
