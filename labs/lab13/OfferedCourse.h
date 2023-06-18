/*
              Name: Rayan Checa
        Assignment: Lab 12: Course information
	      Due Date: 27/04/2023	       
              File: OfferredCourse.h
*/

#ifndef OFFERED_COURSE_H
#define OFFERED_COURSE_H

#include "Course.h"

class OfferedCourse : public Course {
private:
    string instructorName;
    string location;
    string classTime;

public:
    // Mutator functions
    void SetInstructorName(const string& name);
    void SetLocation(const string& loc);
    void SetClassTime(const string& time);

    // Accessor functions
    string GetInstructorName() const;
    string GetLocation() const;
    string GetClassTime() const;

    // Override PrintInfo() function
    void PrintInfo() const override;

    // New function to print extended information
    void PrintExtendedInfo() const;
};

#endif
