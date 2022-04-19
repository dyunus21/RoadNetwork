#include "roadNetwork.hpp"

roadNetwork::roadNetwork() {

    //vectors to store edges and nodes
    std::vector<Edge> edges;
    std::vector<Node> nodes;

    //create file streams for edges and ndoes
    // std::fstream readEdges;
    // std::fstream readNodes;

    std::ifstream readEdges("src/cleaned_edges.csv");
    std::ifstream readNodes("src/cleaned_nodes.csv");

    // readEdges.open("cleaned_edges.csv");
    // readNodes.open("cleaned_nodes.csv");

    //reading respective csv files for edges and nodes
    std::string currLineEdges;
    std::string currLineNodes;

    std::getline(readEdges, currLineEdges);
    std::getline(readNodes, currLineNodes);
    std::cout << "in constructor: currLineEdges " << currLineEdges <<std::endl;
    std::cout << "in constructor: currLineNodes " << currLineNodes <<std::endl;

    //creating vector for each line of the csv
    std::vector<std::string> currEdgeVector;
    std::vector<std::string> currNodeVector;

    //reading the files
    while(std::getline(readEdges, currLineEdges)){

        //splitting each element between commas and adding to a vector
        currEdgeVector = utilities::Split(currLineEdges, ',');

        //creating new edge and node from struct
        Edge edgeToAdd = {std::stoi(currEdgeVector.at(0)), std::stoi(currEdgeVector.at(1)), std::stoi(currEdgeVector.at(2)), std::stod(currEdgeVector.at(3))};
        
        // std::cout << "currEdgeVectror: " << currEdgeVector.at(0) <<std::endl;
        //adding edge and node to vectors
        edges.push_back(edgeToAdd);

        //clearing each vector to get it ready for the next line of the csv
        currEdgeVector.clear();
    }

    while( std::getline(readNodes, currLineNodes)){

        //splitting each element between commas and adding to a vector
        currNodeVector = utilities::Split(currLineEdges, ',');

        //creating new edge and node from struct
        Node nodeToAdd = {std::stoi(currNodeVector.at(0)), std::stod(currNodeVector.at(1)),std::stod(currNodeVector.at(2))};
        
        // std::cout << "currNodeVector " << currNodeVector.at(0) <<std::endl;
        //adding edge and node to vectors
        nodes.push_back(nodeToAdd);

        //clearing each vector to get it ready for the next line of the csv
        currNodeVector.clear();
    }
    std::cout <<"nodes size: " << nodes.size() << std::endl;
    std::cout <<"edges size: " << edges.size() << std::endl;    

    // Created an empty adjacency matrix of size nodes x nodes
    // for(size_t i = 0; i<nodes.size();i++) {
    //     std::vector<double> row(nodes.size());
    //     adjacencyMatrix.push_back(row);
    //     std::cout<<i<<std::endl;
    // }
    std::vector<std::vector<double> > adj(nodes.size(), std::vector<double> (nodes.size(), 0.0));
    std::cout <<"adjacency matrix size: " << adj.size() << std::endl;
    std::cout <<"adjacency matrix[0] size: " << adj[0].size() << std::endl;
    // Stores L2 Distances between every node
    for (size_t i = 0; i<edges.size();i++) {
        Edge edge = edges[i];
        adjacencyMatrix[edge.startNodeID][edge.endNodeId] = edge.distance;
        adjacencyMatrix[edge.endNodeId][edge.startNodeID] = edge.distance;
    }
    std::cout<<"done";
}

std::vector<std::vector<double> > roadNetwork::getAdjacencyMatrix(){
    return adjacencyMatrix;
}
