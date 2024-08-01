# Overview :-
The graph class represents a weighted graph and provides methods for adding edges, printing paths, and finding the shortest path between nodes.

# Private Members:-
1) int num_of_Nodes: Stores the number of nodes in the graph.
2) vector<int> nodePath: Stores the path taken from source to destination nodes.

# Public Members:-
1) map<pair<int, int>, int> edgePairs: Stores edges as pairs of nodes with associated costs.

# Constructor:-
1) graph(int number_of_nodes): Initializes the graph with the specified number of nodes.

# Methods:-
1) void addEdge(int src, int dest, int cost): Adds an edge from src to dest with the specified cost.
2) void printPath(): Prints the nodes in the path stored in nodePath.
3) void shortestPath(int src, int dest, map<pair<int, int>, int> edges): Finds and prints the shortest path from src to dest using the provided edges map.
4) void print_edgePairs(): Prints all edges and their costs in the graph.