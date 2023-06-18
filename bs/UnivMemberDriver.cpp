/*
              Name: Rayan Checa
        Assignment: University Member Lab
	      Due Date: 05/17/2023	        
              File: UnivMemberDriver.cpp
*/

#include "UnivMember.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() 
{
    vector<UnivMember> members;

    // Read the CSProfNames.txt file
    ifstream profFile("CSProfNames.txt");
    string line;

    while (getline(profFile, line)) 
    {
        members.push_back(UnivMember("Prof", line)); // Create Prof UnivMember and add it to the vector
    }
    profFile.close();

    // Read the StudentNames.txt file
    ifstream studentFile("StudentsLastFirst.txt");

    while (getline(studentFile, line)) 
    {
        members.push_back(UnivMember("Student", line)); // Create Student UnivMember and add it to the vector
    }
    studentFile.close();

    // Print all University Members
    for (const UnivMember &member : members) 
    {
        member.printUnivMember();
    }

    return 0;
}
