/*
              Name: Rayan Checa
        Assignment: Name Lab
	      Due Date: 05/03/2023	        
              File: NameDriver.cpp
*/
#include "Name.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    // Open the input file containing names
    ifstream input_file("NamesLastFirst.txt");
    // Vector to store pointers to Name objects
    vector<Name*> names;

    // Read each line from the input file
    string line;
    while (getline(input_file, line)) 
    {
        // Create a Name object using the line and add its pointer to the vector
        Name* name = new Name(line);
        names.push_back(name);
    }

    // Close the input file
    input_file.close();

    // Print the vector in reverse order (first last)
    for (auto it = names.rbegin(); it != names.rend(); ++it)
    {
        (*it)->printName();
        // Free memory
        delete *it;
    }

    return 0;
}

