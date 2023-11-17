# prog5: I Know A Guy, Who Knows A Guy

**Disclaimer:** I made this in response to Professor Pang's CSE 101 Fall 2023 class dropping a graph assignment, and not covering C++. This is NOT a required assignment, and does not provide any extra credit.

Author: Anthony Umemoto 2023

## Description

Given a network friendships represented as a graph where people are nodes and friendships are edges, how many friends separate one person from another?

For example:

![Example Graph](./img/graph.JPG)

Aidan is 2 steps away from Max. Note that both (Aidan -> Tony -> Max), and (Aidan -> Trisha -> Max) are valid shortest paths. It will often be the case that there are multiple shortest paths. While there are longer paths, such as (Aidan -> Kelly -> Bob -> Max), we are only concerned with finding the shortest path.

## Your Goal Is...

* Compile a `prog5` executable upon running `make`
* The `prog5` executable should be run using the command:
`./prog5 -d <database file> -i <input file>`
* Read in a database of people, and their connections to others to construct a graph.
* Read in pairs of people from an input file. For each pair, the program should output the shortest path between them to `stdout`.
* The executable should produce no errors in valgrind.
* The executable should produce shortest paths **of the same length** as the example output.

**You may choose to use either C or C++ for this project.**

## Person Class

The `Person` class will act as the nodes in your graph. It should have the following attributes:

* `name`: The person's name.
* `friends`: The list of friends they have, these are the edges in the graph.

You may add more.

It is up to you to decide what methods the `Person` class will have.

## Graph Class

It is up to you to decide what attributes the `Graph` class will have, but it will need the following methods:

* `Graph()`: Constructs a new `Graph`.
* `delete()`: Free's all associated memory.
* `addPerson(string name)`: Creates a new `Person`, and adds them to the graph.
* `addFriendship(string name1, string name2)`: Connects two people (this is adding an edge to the graph). If one or both names don't exist in the graph, just do nothing.
* `stack<string> findPath(string name1, string name2)`: Uses BFS to find the shortest path between two people. Returns a stack of the names in that shortest path, including name1 and name2.

You may, and likely must, create new methods as you see fit. You may also change the names, arguments, and return types of the methods above.

## Edge Cases

* Two people may not have a path that connects them. If this is the case, output `no connection` instead of the path.
* The input file will always have names that exist in the graph.
* 