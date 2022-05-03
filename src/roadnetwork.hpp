#pragma once
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <queue>
#include <fstream>
#include "utilities.hpp"
#include "Edge.hpp"
#include "Node.hpp"

// Class that defines the structure of our data storage
class roadNetwork
{
    // Edge will contain edgeId, startNodeId, endNodeId and the distance
    // struct Edge
    // {
    //     int edgeId;
    //     int startNodeID;
    //     int endNodeId;
    //     double distance;
    // };

    // Node will contain nodeId, x and y coordinates and
    // a vector of all the edges that start at that node
    // struct Node
    // {
    //     int nodeID;
    //     double x;
    //     double y;
    // };

public:
    // default constructor
    roadNetwork();
    std::vector<Edge> getEdges();
    std::vector<Node> getNodes();

    std::vector<std::vector<double> > getAdjacencyMatrix();

    // Required private member variables
private:
    std::vector<std::vector<double> > adjacencyMatrix;
    // vectors to store edges and nodes
    std::vector<Edge> edges;
    std::vector<Node> nodes;
};
