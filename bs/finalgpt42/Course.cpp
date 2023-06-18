#include "Course.h"

Course::Course(const std::string& subject, const std::string& courseNumber, const std::string& section, const std::string& courseName, int hours, int crn, const std::string& term, const ID& professorID, const std::string& meetingTimes, const std::string& time)
    : m_subject(subject), m_courseNumber(courseNumber), m_section(section), m_courseName(courseName), m_hours(hours), m_crn(crn), m_term(term), m_professorID(professorID), m_meetingTimes(meetingTimes), m_time(time)
{
}

// Getters
std::string Course::getSubject() const {
    return m_subject;
}

std::string Course::getCourseNumber() const {
    return m_courseNumber;
}

std::string Course::getSection() const {
    return m_section;
}

std::string Course::getCourseName() const {
    return m_courseName;
}

int Course::getHours() const {
    return m_hours;
}

int Course::getCrn() const {
    return m_crn;
}

std::string Course::getTerm() const {
    return m_term;
}

ID Course::getProfessorID() const {
    return m_professorID;
}

std::string Course::getMeetingTimes() const {
    return m_meetingTimes;
}

std::string Course::getTime() const {
    return m_time;
}

// Setters
void Course::setSubject(const std::string& subject) {
    m_subject = subject;
}

void Course::setCourseNumber(const std::string& courseNumber) {
    m_courseNumber = courseNumber;
}

void Course::setSection(const std::string& section) {
    m_section = section;
}

void Course::setCourseName(const std::string& courseName) {
    m_courseName = courseName;
}

void Course::setHours(int hours) {
    m_hours = hours;
}

void Course::setCrn(int crn) {
    m_crn = crn;
}

void Course::setTerm(const std::string& term) {
    m_term = term;
}

void Course::setProfessorID(const ID& professorID) {
    m_professorID = professorID;
}

void Course::setMeetingTimes(const std::string& meetingTimes) {
    m_meetingTimes = meetingTimes;
}

void Course::setTime(const std::string& time) {
    m_time = time;
}
