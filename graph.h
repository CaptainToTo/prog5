#ifndef GRAPH_H
#define GRAPH_H

#include <stack>
#include <string>
#include "person.h"

using namespace std;

class Graph {
    private:
        // add private methods and attributes here
    public:
        // add any public attributes here

        Graph(); // creates a new, empty graph
        void deleteGraph(); // free's all associated memory
        void addPerson(string name); // adds a person to the graph
        void addFriendship(string name1, string name2); // connects two people in the graph
        stack<string> *findPath(string name1, string name2); // finds the shortest path between two people

        // add any more public methods here
};

#endif