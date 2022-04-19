#include "roadnetwork.h"
#include "dijkstras.h"
#include "utilities.h"

void main() {
    roadnetwork network();
    int nodeId = 0;
    std::vector<std::vector<double>> graph = network.getAdjacencyMatrix();
    std::cout << "Hello, please enter a node Id!" << std::endl;
    std::cin >> nodeId;
    std::vector<int> dijkstraGraph = dijkstras(graph, nodeId );

}