#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
public:
    Course(const std::string& subject, const std::string& courseNumber, const std::string& section,
           const std::string& courseName, const int& creditHours, const int& CRN,
           const std::string& term, const std::string& professorID, const std::string& meetingTimes,
           const std::string& classroom);

    std::string getCourseCode() const;
    std::string getSection() const;
    std::string getCourseName() const;
    int getCreditHours() const;
    int getCRN() const;
    std::string getTerm() const;
    std::string getProfessorID() const;
    std::string getTimeSlot() const;

private:
    std::string subject_;
    std::string courseNumber_;
    std::string section_;
    std::string courseName_;
    int creditHours_;
    int CRN_;
    std::string term_;
    std::string professorID_;
    std::string meetingTimes_;
    std::string classroom_;
};

#endif // COURSE_H
