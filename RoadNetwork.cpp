#include "RoadNetwork.h"

RoadNetwork::RoadNetwork() {
    // @ Kriti add IMPORT

    std::vector<Edge> edges;
    std::vector<Node> nodes;

    // Created an empty adjacency matrix of size nodes x nodes
    for(int i = 0; i<nodes.size();i++) {
        std::vector<double> row(nodes.size());
        adjacencyMatrix.push_back(row);
    }

    // Stores L2 Distances between every node
    for (Edge edge : edges) {
        adjacencyMatrix[edge.startNodeID][edge.endNodeId] = edge.distance;
        adjacencyMatrix[edge.endNodeId][edge.startNodeID] = edge.distance;
    }

}
