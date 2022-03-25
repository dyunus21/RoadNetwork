# teamturtlesunite Project Proposal
Final Project for dyunus2-kritim2-rachelh8
## Leading Question
Our final project will be investigating the shortest path from one location to all the other nodes using the road networks North America map through Dijkstra's algorithm. While developing the shortest path feature, we also want to locate the most important node in the network of locations using the PageRank algorithm. The purpose of our project is to create a general search tool, so people can find the most significant destination and the shortest path from some location to all possible destinations. The dataset will help us visualize the map of all possible roads among North America from which we will extrapolate the shortest path from a specified location. Overall, the leading question and main purpose of our project is: what are the shortest paths from one place to all the other places in North America, and what is the central destination within this map?  

## Dataset Acquisition and Processing
1. **Data Format** In roughly a paragraph, you should describe to the best of your ability the specifics of your input dataset. At minimum this includes: What is the source of the dataset and what is the input format of said dataset? How big is the dataset? Do you plan to use all of the data or only a subset? If so, how will you define the subset?

We are using the Road Network of North America dataset from https://www.cs.utah.edu/~lifeifei/SpatialDataset.htm. It contains a nodes dataset with Node ID, Normalized X Coordinate, and Normalized Y Coordinate as well as an edge dataset with Edge ID, Start Node ID, End Node ID, and L2 Distance. 

FIND SIZE!!

We plan to use all the data of our dataset because with more data we will be able to produce more accurate and reliable results. 


2. **Data Correction** In a paragraph or two, you should describe how will you parse the input data and what checks are you doing to ensure the input data is error-free. At minimum this should dicuss how you will check for missing entries and how will you correct such instances when you find them. Depending on the dataset, it is also reasonable to check for values that are not physically possible or values which are statistical outliers.

We will create a jupyter file notebook and utilize python pandas library to filter out missing values as well as accounting for significant outliers. For example, we could filter out edges with extreme distance values
3. **Data Storage** In a paragraph or two, you should describe what data structure are you using to store the data within your code. If you need any auxilary data structures or preprocessed tables, you should also discuss them here. As part of this proposal you must include an estimate of the total storage costs for your dataset in Big O notation.

## Graph Algorithms
1. **Function Inputs** The algorithms we are choosing to use are Dijkstra's Algorithm to find the shortest path from one location to all others, a BFS traversal, and the PageRank algorithm. In order to use these algorithms, we will convert our dataset into a graph where we use structs for our nodes and edges. Each node struct will contain the node ID, x coordinate, and y coordinate, while edge structs will contain the edge ID, start node ID, end node ID and distance. Each node will also contain a vector of edges starting at that node, which we will use to "follow" a path. We will create a large adjacency matrix from our data, which will be used for the Dijkstra and PageRank algorithm. 

2. **Function Outputs** From the Dijkstra algorithm, we will obtain the shortest distance from the source to other nodes as well as the paths information of this node (edges used). We will visualize the shortest path created by highlighting it in a distinct color. We will also print out a table with the shortest paths from the start to end nodes by printing out the edges used in that path. For the PageRank algorithm, the output will be the importance of each node, which we will utilize to find the most important (central) node. We will highlight this node by coloring it in a way that stands out from other nodes, as well as printing it out to the user.

3. **Function Efficiency** Using the Google PageRank algorithm, the target big O time complexity would be O(k*N), where N is the number of nodes and k is the number of times the code is run on each page. The big O space complexity would be O(N), where N is the number of nodes in the graph. Using the Dijkstra algorithm, we will utilize a heap and priority queue to make the algorithm more efficient, resulting in a target time complexity of O(Elog(E/V)logV) (average) or O(ElogV) (best case) and a space complexity of O(V), where E is the number of edges and V is the number of nodes. 

## Timeline
1. week 1: data acquisition and exploration - analyzing through the dataset for the most crucial and relevant information in   terms of our technical goals
2. week 2: data correction and storage -  cleaning up the garbage values, outliers or missing values and analyzing the best way to store our data for a more time and storage efficient algorithm
3. week 3: developing dji
4. week 4
5. week 5

