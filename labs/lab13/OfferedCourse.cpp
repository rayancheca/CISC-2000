/*
              Name: Rayan Checa
        Assignment: Lab 12: Course information
	      Due Date: 27/04/2023	       
              File: OferredCourse.cpp
*/

#include "OfferedCourse.h"

// Mutator functions
void OfferedCourse::SetInstructorName(const string& name) {
    instructorName = name;
}

void OfferedCourse::SetLocation(const string& loc) {
    location = loc;
}

void OfferedCourse::SetClassTime(const string& time) {
    classTime = time;
}

// Accessor functions
string OfferedCourse::GetInstructorName() const {
    return instructorName;
}

string OfferedCourse::GetLocation() const {
    return location;
}

string OfferedCourse::GetClassTime() const {
    return classTime;
}

// Override PrintInfo() function
void OfferedCourse::PrintInfo() const {
    // Call the base class's PrintInfo() function
    Course::PrintInfo();
}

// New function to print extended information
void OfferedCourse::PrintExtendedInfo() const {
    // Print additional information
    cout << "   Instructor Name: " << instructorName << endl;
    cout << "   Location: " << location << endl;
    cout << "   Class Time: " << classTime << endl;
}
