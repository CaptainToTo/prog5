#include <iostream>
#include <fstream>
#include <getopt.h>
#include <string>
#include <vector>
#include "graph.h"
#include "person.h"

using namespace std;

void help() {
    cout << "usage: ./prog5 -d <database> -i <input>" << endl;
}

// https://www.geeksforgeeks.org/split-string-substrings-using-delimiter/
vector<string> split(string str, char dl) {
    string word = "";
    int num = 0; // to count the number of split strings
    str = str + dl; // adding delimiter character at the end of 'str'
    int l = str.size();

    // traversing 'str' from left to right
    vector<string> substr_list;
    for (int i = 0; i < l; i++) {
        // if str[i] is not equal to the delimiter
        // character then accumulate it to 'word'
        if (str[i] != dl)
            word = word + str[i];
        else {
            // if 'word' is not an empty string, then add to tokens
            if ((int)word.size() != 0)
                substr_list.push_back(word);
            word = "";
        }
    }
    // return the splitted strings
    return substr_list;
}

int main(int argc, char *argv[]) {

    return 0;
}