<<<<<<< Updated upstream
<<<<<<< Updated upstream
#include "roadnetwork.h"
#include "dijkstras.h"
#include "utilities.h"

void main() {
    roadnetwork roadnetwork();
    int nodeId = 0;
    std::vector<std::vector<double>> graph = roadnetwork.getAdjacencyMatrix();
    std::cout << "Hello, please enter a node Id!" << std::endl;
    std::cin >> nodeId;
    std::vector<int> dijkstraGraph = dijkstras(graph, nodeId );

=======
=======
>>>>>>> Stashed changes
#include "RoadNetwork.h"
#include <iostream>
void main(){
    std::cout<<"hi";
<<<<<<< Updated upstream
>>>>>>> Stashed changes
=======
>>>>>>> Stashed changes
}