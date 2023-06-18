/*
              Name: Rayan Checa
        Assignment: ID class
	      Due Date: 14/04/2023	       
              File: IDdriver.cpp
*/

#include <iostream>
#include <vector>
#include "ID.h"

using namespace std;

int main() 
{
    // Create a vector of pointers to ID objects
    vector<ID*> IDs;

    // Create 5 unique ID objects using a for loop
    for (int i = 0; i < 5; ++i)
        // Dynamically allocate a new ID object and append it to the IDs vector
        IDs.push_back(new ID());

    cout << "Printing ID's" << endl;

    // Print the IDs in the vector
    for (const auto& id : IDs)
        cout << id->getFull_ID() << endl;

    // Clean up memory by deleting the dynamically allocated ID objects
    for (const auto& id : IDs)
        delete id;

    return 0;
}

