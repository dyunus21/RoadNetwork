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
