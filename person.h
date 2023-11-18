#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>

using namespace std;

class Person {
    private:
        // add any private attributes or methods here
    public:
        string name; // the person's name
        vector<string> friends; // the list of friends the person has

        // add any public attributes here

        Person(string newName); // constructor for Person class
        void deletePerson(); // deletes all associated memory
        void addFriend(string friendName); // adds a person's name to the friends list

        // add any public methods here
};

#endif