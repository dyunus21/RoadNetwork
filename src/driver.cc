#include "roadNetwork.hpp"
#include "dijkstras.hpp"
#include "utilities.hpp"

int main() {
    roadNetwork network;
    dijkstras dijkstra;
    int nodeId;
    std::vector<std::vector<double> > graph = network.getAdjacencyMatrix();
    std::cout << "Hello, please enter a node Id!" << std::endl;
    std::cin >> nodeId;
    std::cout<<nodeId<<std::endl;
    // std::vector<float> dijkstraGraph = dijkstra.dijkstra_path(graph, nodeId );
    return 0;
}
