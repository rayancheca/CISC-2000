#include "Course.h"
#include <sstream>

Course::Course(const std::string& subject, const std::string& courseNumber, const std::string& section,
               const std::string& courseName, const int& creditHours, const int& CRN,
               const std::string& term, const std::string& professorID, const std::string& meetingTimes,
               const std::string& classroom)
    : subject_(subject), courseNumber_(courseNumber), section_(section), courseName_(courseName),
      creditHours_(creditHours), CRN_(CRN), term_(term), professorID_(professorID),
      meetingTimes_(meetingTimes), classroom_(classroom) {}

std::string Course::getCourseCode() const {
    return subject_ + " " + courseNumber_;
}

std::string Course::getSection() const {
    return section_;
}

std::string Course::getCourseName() const {
    return courseName_;
}

int Course::getCreditHours() const {
    return creditHours_;
}

int Course::getCRN() const {
    return CRN_;
}

std::string Course::getTerm() const {
    return term_;
}

std::string Course::getProfessorID() const {
    return professorID_;
}

std::string Course::getTimeSlot() const {
    std::stringstream ss(meetingTimes_);
    std::string dayOfWeek, startTime, endTime;
    ss >> dayOfWeek >> startTime >> endTime;
    return dayOfWeek + " " + startTime + "-" + endTime;
}
