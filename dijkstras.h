#include "dijkstras.cpp"

std::vector<int> Dijkstras::dijkstra(std::vector<std::vector<int>> graph, int start) {

}

int Dijkstras::minDistance(std::vector<float> distances, std::vector<bool> shortest_path) {
    int min_distance = INT32_MAX;
    int min_index = 0;
    for (int i = 0; i < (int)distances.size(); i++) {
        if (!shortest_path.at(i) && distances[i] <= min_distance) {
            min_distance = distances[i];
            min_index = i;
        }
    }
}