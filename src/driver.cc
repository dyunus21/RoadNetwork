#include "roadnetwork.hpp"
#include "dijkstras.hpp"
#include "utilities.hpp"
#include "pagerank.hpp"

int main()
{
    roadNetwork network;
    dijkstras dijkstra;
    int nodeId;
    std::vector<std::vector<double> > graph = network.getAdjacencyMatrix();
    // validate input
    do
    {
        std::cout << "Hello, please enter a node id (from 0 to " << graph.size() << ")!" << std::endl;
        std::cin >> nodeId;
    } while (nodeId < 0 || nodeId >= (int)graph.size());

    std::vector<float> dijkstraGraph = dijkstra.dijkstra_path(graph, nodeId);
    std::cout << "Distances from nodeID to other nodes: note that only reachable nodes are printed" << std::endl;
    for (size_t i = 0; i < dijkstraGraph.size(); i++)
    {
        if (dijkstraGraph[i] != -1 && i != (size_t)nodeId)
            std::cout << "distance to node " << i << " : " << dijkstraGraph[i] << std::endl;
    }
    return 0;
}
