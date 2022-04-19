#include "roadnetwork.hpp"
#include "dijkstras.hpp"
#include "utilities.hpp"

void main() {
    roadnetwork network();
    dijkstras dijkstra();
    int nodeId = 0;
    std::vector<std::vector<double>> *graph = network.getAdjacencyMatrix();
    std::cout << "Hello, please enter a node Id!" << std::endl;
    std::cin >> nodeId;
    std::vector<float> *dijkstraGraph = dijkstra.dijkstra_path(graph, nodeId );

}