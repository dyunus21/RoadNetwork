#pragma once

#include <vector>
#include <algorithm>

class dijkstras {
    public:
    dijkstras(){};
        std::vector<float> dijkstra_path(std::vector<std::vector<double> > graph, int start);
    private:
        int minDistance(std::vector<float> distances, std::vector<int> shortest_path);
};
