# teamturtlesunite Development Log

Development log for dyunus2-kritim2-rachelh8

## Development Log: 3/25/2022-4/1/2022

_What goals you had set for the week and whether they were accomplished or not_
This week, our goal was to go through the data set/tech stack needed for the project and analyze it for the most crucial and relevant information in terms of our technical goals. We were able to accomplish this goal as we went through all the data in our csv files and successfully recognize the most crucial information. We realized that we will need to process the starting node IDs within our edge data in order to properly create the struct for our edges and nodes, which was the main takeaway from this week. While doing so, we also researched independently on the different technologies and algorithms that we would need.

_What specific tasks each member of your team accomplished in the week_
Diya - Used the Pandas library to check for missing and inconsistent values
Kriti - Learned and shared knowledge about the Pandas python library. Debugged anaconda issues. Revised project proposal according to feedback received.
Rachel - Researched about the different graph algorithms (Dijkstra's and PageRank algorithm) that we will use in our program. Revised project proposal according to feedback received.

_What problems you encountered (if any) that prevented you from meeting your goals_
Some problems we encountered were that we needed to understand the steps of our project in order to figure out which data is needed. Since we had minimal experience with this, we had some trouble downloading and starting up an anaconda vm and using python libraries to clean our data.

_What you plan to accomplish next week_
Next week, we plan to begin the actual processing of our data by cleaning up any garbage values/outliers and irrelevant data. We will also try and determine the most efficient way to organize the algorithms we studied this week so that they are more time + storage efficient. While doing so, we may begin to explore potential ways to visualize our data as an actual graph (including external libraries/modules if necessary).

## Development Log: 4/4/2022-4/9/2022

_What goals you had set for the week and whether they were accomplished or not_
This week, our goal was to go through the data and clean up garbage values such as nodes that have less than or equal to one edge. Additionally, we wanted to discuss about storage and create the structs for edges and nodes which will eventually be used to implemented Dijkstra's and PageRank algorithm. Since this took some extra time, we were not able to reach our previous goal of researching potential ways of visualizing our data as an actual graph.

_What specific tasks each member of your team accomplished in the week_
Diya - Created functions in RoadNetwork.
Kriti - Created struct edges and nodes.
Rachel - Created dataframe with edges and nodes. Cleaned dataframes to only include nodes with more than one edge.

_What problems you encountered (if any) that prevented you from meeting your goals_
We realized that python holds their dataframes as pointers, so when we were deleting data from a "copy", the original dataframe also changed. This resulted in us losing data without realizing. To fix the issue, we used pd.copy() to create another dataframe, so we don't have to keep reading from our csv values when we want to access our original data.

_What you plan to accomplish next week_
Next week, we plan to begin to develop djikstra's algorithm and aggregate the csv data into our storage components. We hopefully will begin to explore potential ways to visualize our data as an actual graph (including external libraries/modules if necessary).

## Development Log: 4/10/2022-4/16/2022

_What goals you had set for the week and whether they were accomplished or not_
This week, our goal was to export all our data from the preprocessing Python notebooks and process it for use within our C++ code. After doing so, we also wanted to implement the Dijkstra's algorithm for an adjacency matrix that we would create. We were able to accomplish all of the tasks we had set for this week and were able to implement the first of our algorithms for the final project.

_What specific tasks each member of your team accomplished in the week_
Diya - Created the adjacency matrix given the edge and node vectors and the edge weights as the distance between two nodes.
Kriti - Exported data from the Python notebooks as .csv files and then read the data into vectors of structs so that they could be used in creation of graph matrices.
Rachel - Implemented the Dijkstra's algorithm as a class that could be called from our RoadNetwork files

_What problems you encountered (if any) that prevented you from meeting your goals_
One problem that we encountered while working on this week's goals was determining the best way to store our adjacency matrix and process the data as we had very large datasets and wanted to take into consideration storage requirements. We also had some difficulties with Github as we lost several portions of our code in the process of merging our work together.

_What you plan to accomplish next week_
Next week, we plan on implementing the PageRank algorithm and then also creating more tests for each of the two algorithms. We will also start to explore potential ways to visualize the data and better display the information gathered to the user. At this point, we may also begin implementing basic UI features to improve the readability and usablity of our program.

## Development Log: 4/18/2022-4/23/2022

_What goals you had set for the week and whether they were accomplished or not_
This week, our goal was to create the pagerank algorithm to find the most significant node and a driver file to collect user input on which we will perform the pagerank algorithm on.

_What specific tasks each member of your team accomplished in the week_
Diya - Helped make makefile and fix compiler errors.
Kriti - Created driver file to collect user input and create instances of roadnetwork and djikstras.
Rachel - Implemented the PageRank algorithm as a class that could be called from our RoadNetwork files

_What problems you encountered (if any) that prevented you from meeting your goals_
One problem that we encountered while working on this week's goals was creating the makefile and resolving our merge conflicts. One of the errors we had while creating the makefile was related to the file extensions of the files, which we resolved by changing the extensions of the files from .cpp to .cc. Unfortunately, when we pushed and pulled our code from each other's changes, there were multiple merge conflicts which messed up our code.
_What you plan to accomplish next week_
Next week, we plan on finishing and testing our pagerank and djikstra algorithm. Then we can start on the UI where we overlay a map and have UI components to input location.

## Development Log: 4/24/2022-5/1/2022

_What goals you had set for the week and whether they were accomplished or not_
This week, our goal was to work on implementing a user interface for the user to interact with our code. We also wanted to finish and test our pagerank and dijkstra algorithm. We were able to work on testing the pagerank and dijkstra's and also creating smaller datasets to create test benches with. However, we realized that the GUI interfaces for C++ were not quite what we were looking for and decided to instead focus on accessing data directly in the console

_What specific tasks each member of your team accomplished in the week_
Diya - Created test cases, assisted with data processing.
Kriti - Corrected and informally tested Dijkstra's algorithm.
Rachel - Created smaller dataset to test with and adjusted the PageRank algorithm to avoid segfaults.

_What problems you encountered (if any) that prevented you from meeting your goals_
One problem that we encountered while working on this weeks goals were that our data was poorly structured and our adjacency matrix was not created properly. We also had slight issues with the Dijkstra and Pagerank algorithms, so we had to spend more of our time working ont hat.

_What you plan to accomplish next week_
Next week, we plan on completely finishing our program and creating the final deliverables that are due on Friday. 
