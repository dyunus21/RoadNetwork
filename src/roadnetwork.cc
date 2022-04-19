#include "roadnetwork.hpp"

roadNetwork::roadNetwork() {

    //vectors to store edges and nodes
    std::vector<Edge> edges;
    std::vector<Node> nodes;

    //create file streams for edges and ndoes
    std::fstream readEdges;
    std::fstream readNodes;

    readEdges.open("cleaned_edges.csv");
    readNodes.open("cleaned_nodes.csv");

    //reading respective csv files for edges and nodes
    std::string currLineEdges;
    std::string currLineNodes;

    std::getline(readEdges, currLineEdges);
    std::getline(readNodes, currLineNodes);

    //creating vector for each line of the csv
    std::vector<std::string> currEdgeVector;
    std::vector<std::string> currNodeVector;

    //reading the files
    while(currLineEdges.size() != 0){

        //splitting each element between spaces and adding to a vector
        currEdgeVector = utilities::Split(currLineEdges, ' ');
        currNodeVector = utilities::Split(currLineEdges, ' ');

        //creating new edge and node from struct
        Edge edgeToAdd = {std::stoi(currEdgeVector.at(0)), std::stoi(currEdgeVector.at(1)), std::stoi(currEdgeVector.at(2)), std::stod(currEdgeVector.at(3))};
        Node nodeToAdd = {std::stoi(currNodeVector.at(0)), std::stod(currNodeVector.at(1)),std::stod(currNodeVector.at(2))};

        //adding edge and node to vectors
        edges.push_back(edgeToAdd);
        nodes.push_back(nodeToAdd);

        //clearing each vector to get it ready for the next line of the csv
        currEdgeVector.clear();
        currNodeVector.clear();
    }


    // Created an empty adjacency matrix of size nodes x nodes
    for(size_t i = 0; i<nodes.size();i++) {
        std::vector<double> row(nodes.size());
        adjacencyMatrix.push_back(row);
    }

    // Stores L2 Distances between every node
    for (size_t i = 0; i<edges.size();i++) {
        Edge edge = edges[i];
        adjacencyMatrix[edge.startNodeID][edge.endNodeId] = edge.distance;
        adjacencyMatrix[edge.endNodeId][edge.startNodeID] = edge.distance;
    }
}

std::vector<std::vector<double> > roadNetwork::getAdjacencyMatrix(){
    return adjacencyMatrix;
}
