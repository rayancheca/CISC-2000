#include "Course.h"
#include "ID.h"
#include "UnivMember.h"
#include "Schedule.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <iomanip>

// Function prototypes
void readCoursesFromFile(std::vector<Course>& courses, const std::string& filename);
void saveProfessorsToFile(const std::vector<Course>& courses, const std::string& filename);
std::vector<Course> getCoursesForID(const std::vector<Course>& courses, const ID& id);

int main() {
    // Read courses from the CoursesFall2023.txt file
    std::vector<Course> courses;
    readCoursesFromFile(courses, "CoursesFall2023.txt");

    // Generate professor list along with IDs and save to a file
    saveProfessorsToFile(courses, "ProfessorsFall2023.txt");

    // Show all courses for a given professor or student
    ID id1("12345");
    std::vector<Course> coursesForID1 = getCoursesForID(courses, id1);
    std::cout << "Courses for ID " << id1.get_ID() << ":\n";
    for (const Course& course : coursesForID1) {
        std::cout << course.getCourseCode() << " - " << course.getCourseName() << std::endl;
    }

    // Create a useful schedule showing a grid of M-F and time blocks with Course# and section
    Schedule schedule;
    for (const Course& course : coursesForID1) {
        schedule.addCourse(course);
    }
    schedule.showSchedule();

    return 0;
}

// Function implementations
void readCoursesFromFile(std::vector<Course>& courses, const std::string& filename) {
    std::ifstream inFile(filename);
    if (!inFile) {
        std::cerr << "Unable to open file: " << filename << std::endl;
        exit(1);
    }

    std::string line;
    int lineNum = 0;
    while (std::getline(inFile, line)) {
        lineNum++;
        std::cout << line << std::endl;
        std::stringstream ss(line);
        std::string subject, courseNumber, section, description, instructor, meetingTimes, time;
        int hours, crn;
        std::string term;

        if (std::getline(ss, subject, '\t') && 
            std::getline(ss, courseNumber, '\t') &&
            std::getline(ss, section, '\t') &&
            std::getline(ss, description, '\t') &&
            ss >> hours &&
            ss.ignore() &&
            ss >> crn &&
            ss.ignore() &&
            std::getline(ss, term, '\t') &&
            std::getline(ss, instructor, '\t') &&
            std::getline(ss, meetingTimes, '\t') &&
            std::getline(ss, time)) {

            Course course(subject, courseNumber, section, description, hours, crn, term, instructor, meetingTimes, time);
            courses.push_back(course);
        }
        else {
            std::cerr << "Error reading line " << lineNum << " from file " << filename << std::endl;
        }
    }
    inFile.close();
}

void saveProfessorsToFile(const std::vector<Course>& courses, const std::string& filename) {
    std::ofstream outFile(filename);
    if (!outFile) {
        std::cerr << "Unable to open file: " << filename << std::endl;
        exit(1);
    }

    std::map<std::string, ID> professors;
    for (const Course& course : courses) {
        ID profID(course.getProfessorID());
        professors[profID.get_ID()] = ID(profID.get_ID());
    }

    for (const auto& prof : professors) {
        outFile << prof.second.get_ID() << std::endl;
    }
    outFile.close();
}

std::vector<Course> getCoursesForID(const std::vector<Course>& courses, const ID& id) {
    std::vector<Course> result;
    for (const Course& course : courses) {
        if (course.getProfessorID() == id.get_ID()) {
            result.push_back(course);
        }
    }
    return result;
}
