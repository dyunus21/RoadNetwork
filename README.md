# dyunus2-kritim2-rachelh8  
Final Project for CS 225  
Working on creating algorithms to analyze and manipulate road network data

## Github Organization 
All of the final deliverables (video demonstration and final report) can be found in the deliverables folder. The bulk of our code is located in the src folder, with the original data being found in the src/Datasets folder. There are also test cases located in the tests folder. The output of the code is printed directly to the console, so there are no result files located within the directory.

## Running Instructions  
1. Clone the repository on the local computer
2. Optional: Modify input data by changing the edges.csv and nodes.csv files in the src/Datasets folder
### General Code Execution
1. Run `make` in the command line to compile the code
2. Run `bin/exec` in the command line to run the code
3. Enter the starting node for the Dijkstra's algorithm in the command line
4. See results for Dijkstra's and PageRank algorithm in the console
### Test Suite Execution
1. Run `make tests` in the command line to compile the code
2. Run `bin/tests` in the command line to run the tests
### Tests
The test suite contains tests to ensure the adjacency matrix is properly created, that Dijkstra returns the proper output and PageRank runs correctly on a smaller subset of the main dataset. 
### Data Format
The edges.csv file should be in the format `Edge Node ID,Start Node ID,End Node ID,L2 Distance` where the L2 Distance is the distance covered by the edge and the nodes.csv file in the format `Node ID,NormX,NormY` where NormX and NormY represent the normalized X and Y coordinates of the node. There should not be any empty lines in these files nor the cleaned .csv files.
