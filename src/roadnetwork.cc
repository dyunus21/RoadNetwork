#include "roadnetwork.hpp"

roadNetwork::roadNetwork()
{

    // create file streams for edges and ndoes
    std::ifstream readEdges("src/cleaned_edges_small.csv");
    std::ifstream readNodes("src/cleaned_nodes_small.csv");

    // reading respective csv files for edges and nodes
    std::string currLineEdges;
    std::string currLineNodes;

    std::getline(readEdges, currLineEdges);
    std::getline(readNodes, currLineNodes);

    // creating vector for each line of the csv
    std::vector<std::string> currEdgeVector;
    std::vector<std::string> currNodeVector;

    // reading the files
    while (std::getline(readEdges, currLineEdges))
    {

        // splitting each element between commas and adding to a vector
        currEdgeVector = utilities::Split(currLineEdges, ',');

        // creating new edge and node from struct
        Edge edgeToAdd = {std::stoi(currEdgeVector.at(0)), std::stoi(currEdgeVector.at(1)), std::stoi(currEdgeVector.at(2)), std::stod(currEdgeVector.at(3))};

        // std::cout << "currEdgeVectror: " << currEdgeVector.at(0) <<std::endl;
        // adding edge and node to vectors
        edges.push_back(edgeToAdd);

        // clearing each vector to get it ready for the next line of the csv
        currEdgeVector.clear();
    }
    while (std::getline(readNodes, currLineNodes))
    {

        // splitting each element between commas and adding to a vector
        currNodeVector = utilities::Split(currLineNodes, ',');
        // std::cout << currNodeVector[0] << " " << currNodeVector[1] << " " << currNodeVector[2] << std::endl;

        // creating new edge and node from struct
        Node nodeToAdd = {std::stoi(currNodeVector.at(0)), std::stoi(currNodeVector.at(1)), std::stoi(currNodeVector.at(2))};
        // std::cout << "currNodeVector " << currNodeVector.at(0) <<std::endl;
        // adding edge and node to vectors
        nodes.push_back(nodeToAdd);

        // clearing each vector to get it ready for the next line of the csv
        currNodeVector.clear();
    }

    int largest_node = nodes[nodes.size() - 1].nodeID;

    std::vector<std::vector<double> >
        adj(largest_node + 1, std::vector<double>(largest_node + 1, 0.0));
    // std::cout << "adjacency matrix size: " << adj.size() << std::endl;
    // std::cout << "adjacency matrix[0] size: " << adj[0].size() << std::endl;
    adjacencyMatrix = adj;
    // Stores L2 Distances between every node
    for (size_t i = 0; i < edges.size(); i++)
    {
        Edge edge = edges[i];
        adjacencyMatrix[edge.startNodeID][edge.endNodeId] = edge.distance;
        adjacencyMatrix[edge.endNodeId][edge.startNodeID] = edge.distance;
    }
}

std::vector<std::vector<double> > roadNetwork::getAdjacencyMatrix()
{
    return adjacencyMatrix;
}

std::vector<Edge> roadNetwork::getEdges()
{
    return edges;
}

std::vector<Node> roadNetwork::getNodes()
{
    return nodes;
}
