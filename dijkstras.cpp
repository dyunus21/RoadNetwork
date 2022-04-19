#include "dijkstras.h"

/*
Used to find the single source Dijstra's shortest path given an adjacency matrix
implemented as a vector of vectors
@param graph: adjacency graph where non-zero values represent a weighted edge, edge is the distance between the two nodes (a road)
@param start: node to start from
@return vector with the distance from each node to another
*/
std::vector<int> Dijkstras::dijkstra(std::vector<std::vector<int>> graph, int start) {
    std::vector<int> distances(graph.size(), INT32_MAX); // return variable: holds distance from start node to another
    std::vector<int> shortest_path; // shortest path set: node i will be included if i is part of the shortest path tree/shortest distance has been followed

    distances[start] = 0; // distance from source to self is 0

    for (int vertex = 0; vertex < int(graph.size()) - 1; i++) {
        // find minimum distance vertex from the vertices that haven't been visited/aren't part of shortest_path
        int shortest_idx = minDistance(distances, shortest_path);

        shortest_path.push_back(shortest_idx); // the min distance index has been processed

        // update the distances for the adjacent vertices of the min distance vertex
        for (int v_adj = 0; v_adj < (int)graph.size(); v_adj++) {
            // if the adjacent vertex isn't in shortest_path, an edge exists between min distance index
            // and v_adj and the path from start to v_adj is shorter, then update distance at v_adj
            if (std::find(shortest_path.begin(), shortest_path.end(), v_adj) == shortest_path.end() && 
                graph[shortest_idx][v_adj] && distances[shortest_idx] != INT32_MAX && (distances[shortest_idx] + graph[shortest_idx][v_adj]) < distances[v_adj])
                distances[v_adj] = distances[shortest_idx] + graph[shortest_idx][v_adj];
        }
    } 
    
    return distances;
}


/* 
Used to find the node that has the minimum distance value from the set of nodes
that are not in the shortest path
@param distances: distance values between nodes
@param shortest_path: set of nodes visited
@return minimum index with the minimum distance value
*/
int Dijkstras::minDistance(std::vector<float> distances, std::vector<int> shortest_path) {
    int min_distance = INT32_MAX;
    int min_index = 0;
    for (int i = 0; i < (int)distances.size(); i++) {
        if (std::find(shortest_path.begin(), shortest_path.end(), i) == shortest_path.end() && distances[i] <= min_distance) { 
            min_distance = distances[i];
            min_index = i;
        }
    }
    return min_index;
}