#ifndef COURSE_H
#define COURSE_H

#include "Time.h"
#include <string>
#include <vector>

class Course {
private:
    std::string Subject;    // Subject code (e.g. CISC)
    int Number;             // Course number (e.g. 1100)
    std::string Section;    // Course section (e.g. R01)
    std::string Description;// Course description
    int Hours;              // Credit hours
    int CRN;                // Course Registration Number
    std::string Term;       // Semester term
    std::string Instructor; // Instructor name
    std::vector<Time> MeetingTimes; // List of meeting times for the course

public:
    // Constructors
    Course();
    Course(const std::string &subject, int number, const std::string &section,
           const std::string &description, int hours, int crn,
           const std::string &term, const std::string &instructor);

    // Accessors
    std::string getSubject() const;
    int getNumber() const;
    std::string getSection() const;
    std::string getDescription() const;
    int getHours() const;
    int getCRN() const;
    std::string getTerm() const;
    std::string getInstructor() const;
    std::vector<Time> getMeetingTimes() const;

    // Mutators
    void setSubject(const std::string &subject);
    void setNumber(int number);
    void setSection(const std::string &section);
    void setDescription(const std::string &description);
    void setHours(int hours);
    void setCRN(int crn);
    void setTerm(const std::string &term);
    void setInstructor(const std::string &instructor);
    void addMeetingTime(const Time &time);

    // Print functions
    void printCourseInfo() const;
    void printMeetingTimes() const;
};

#endif // COURSE_H
