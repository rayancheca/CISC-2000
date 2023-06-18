/*
              Name: Rayan Checa
        Assignment: Lab 12: Course information
	      Due Date: 27/04/2023	       
              File: Course.cpp
*/

#include "Course.h"

// Mutator functions
void Course::SetCourseNumber(const string& number) {
    courseNumber = number;
}

void Course::SetCourseTitle(const string& title) {
    courseTitle = title;
}

// Accessor functions
string Course::GetCourseNumber() const {
    return courseNumber;
}

string Course::GetCourseTitle() const {
    return courseTitle;
}

// Print course information
void Course::PrintInfo() const {
    cout << "Course Information:" << endl;
    cout << "   Course Number: " << courseNumber << endl;
    cout << "   Course Title: " << courseTitle << endl;
}
