# pragma once
# include <vector>
# include <string>
# include <algorithm>
# include <iostream>
# include <cmath>
# include <queue>

//Class that defines the structure of our data storage 
class RoadNetwork{
    //Edge will contain edgeId, startNodeId, endNodeId and the distance
    struct Edge {
        int edgeId;
        int startNodeID;
        int endNodeId;
        double distance;
    };
    
    //Node will contain nodeId, x and y coordinates and 
    //a vector of all the edges that start at that node
    struct Node {
        int nodeID;
        double x;
        double y;
        std::vector<Edge> startingEdges;
    };
    
    public:
        // default constructor
        RoadNetwork();

        // get node at coordinate
        Node* getNode(double x, double y);
        
        // Get distance between nodeA and nodeB
        double getDistance(Node* nodeA, Node* nodeB);
        
        // returns the shortest path between two nodes (in a matrix) using Dijikstra algorithm
        std::vector<std::vector<Node*> > shortestPath(Node* nodeA, Node* nodeB);

        // the output will be the importance of each node, which we will utilize to find the most important (central) node. 
        std::vector<std::vector<Node*> > getImportance(std::vector<std::vector<Node*> > path);
        
    // Required private member variables   
    private:
        std::priority_queue<Node*> roadQueue_;
        std::vector<Node*> roadHeap_;
        std::vector<std::vector<double>> adjacencyMatrix;
};