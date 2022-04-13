#include "RoadNetwork.h"

RoadNetwork::RoadNetwork() {
    // @ Kriti add IMPORT

    std::vector<Edge> edges;
    std::vector<Node> nodes;

    for(int i = 0; i<nodes.size();i++) {
        std::vector<double> row(nodes.size());
        adjacencyMatrix.push_back(row);
    }

    for (Edge edge : edges) {
        adjacencyMatrix[edge.startNodeID][edge.endNodeId] = edge.distance;
        adjacencyMatrix[edge.endNodeId][edge.startNodeID] = edge.distance;
    }

}
