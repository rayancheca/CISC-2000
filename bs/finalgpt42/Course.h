#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "ID.h"

class Course {
public:
    Course(const std::string& subject, const std::string& courseNumber, const std::string& section, const std::string& courseName, int hours, int crn, const std::string& term, const ID& professorID, const std::string& meetingTimes, const std::string& time);

    // Getters
    std::string getSubject() const;
    std::string getCourseNumber() const;
    std::string getSection() const;
    std::string getCourseName() const;
    int getHours() const;
    int getCrn() const;
    std::string getTerm() const;
    ID getProfessorID() const;
    std::string getMeetingTimes() const;
    std::string getTime() const;

    // Setters
    void setSubject(const std::string& subject);
    void setCourseNumber(const std::string& courseNumber);
    void setSection(const std::string& section);
    void setCourseName(const std::string& courseName);
    void setHours(int hours);
    void setCrn(int crn);
    void setTerm(const std::string& term);
    void setProfessorID(const ID& professorID);
    void setMeetingTimes(const std::string& meetingTimes);
    void setTime(const std::string& time);

private:
    std::string m_subject;
    std::string m_courseNumber;
    std::string m_section;
    std::string m_courseName;
    int m_hours;
    int m_crn;
    std::string m_term;
    ID m_professorID;
    std::string m_meetingTimes;
    std::string m_time;
};

#endif // COURSE_H
