/*
              Name: Rayan Checa
        Assignment: Lab 12: Course information
	      Due Date: 27/04/2023	       
              File: Course.h
*/

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

using namespace std;

class Course {
protected:
    string courseNumber;
    string courseTitle;

public:
    // Mutator functions
    void SetCourseNumber(const string& number);
    void SetCourseTitle(const string& title);

    // Accessor functions
    string GetCourseNumber() const;
    string GetCourseTitle() const;

    // Print course information
    virtual void PrintInfo() const;
};

#endif
