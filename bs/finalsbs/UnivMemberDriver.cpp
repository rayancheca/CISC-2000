/*
              Name: Rayan Checa
        Assignment: Final
	      Due Date: 12/05/2023	        
              File: UnivMemberDriver.cpp
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <set>
#include "UnivMember.h"
#include <iomanip>

using namespace std;

int main() {
    // Read the input file
    ifstream inFile("CoursesFall2023.txt");
    string line;
    vector<string> professors;

    // Skip the header line
    getline(inFile, line);

    while (getline(inFile, line)) {
        // Find the position of the first double-quote character
        size_t firstQuote = line.find('"');

        // If the first double-quote character is found
        if (firstQuote != string::npos) {
            // Find the position of the second double-quote character
            size_t secondQuote = line.find('"', firstQuote + 1);

            // If the second double-quote character is found
            if (secondQuote != string::npos) {
                // Extract the professor's name and add it to the vector
                string professorName = line.substr(firstQuote + 1, secondQuote - firstQuote - 1);
                if (professorName != "TBD") {
                    professors.push_back(professorName);
                }
            }
        }
    }

    inFile.close();

    // Remove duplicate professor names
    set<string> uniqueProfessors(professors.begin(), professors.end());
    professors.assign(uniqueProfessors.begin(), uniqueProfessors.end());

    // Output the professor list with IDs
    ofstream outFile("ProfessorsFall2023.txt");

for (const string& profName : professors) {
    UnivMember p("Professor", profName);  // Add "Professor" as the role
    outFile << "Professor: " << left << setw(30) << p.getUnivName().toString()
            << "ID: " << p.getUnivID().getFull_ID() << "\n";
}

    outFile.close();

    return 0;
}

