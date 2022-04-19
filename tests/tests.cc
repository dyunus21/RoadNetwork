#include "catch.hpp"
#include "/Users/diyayunus/Library/CloudStorage/OneDrive-UniversityofIllinois-Urbana/CS 225/dyunus2-kritim2-rachelh8/src/roadNetwork.hpp"
#include <iostream>

TEST_CASE("Check Adjacency Matrix", "[Adj_Matrix]") {
    roadNetwork road = roadNetwork();
    std::vector<std::vector<double> > adj = road.getAdjacencyMatrix();

    REQUIRE(adj[2][3] ==0) ;
    REQUIRE(adj[3][2] ==0) ;
    REQUIRE(adj[3][4] ==2) ;
    REQUIRE(adj[4][3] ==2) ;
    REQUIRE(adj[10][12] ==24); 
    REQUIRE(adj[12][10] ==24) ;

}