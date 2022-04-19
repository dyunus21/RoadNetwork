#pragma once

#include <vector>
#include <algorithm>

class Dijkstras {
    public:
        std::vector<int> dijkstra(std::vector<std::vector<int>> graph, int start);
    private:
        int minDistance(std::vector<int> distances, std::vector<bool> shortest_path);
};