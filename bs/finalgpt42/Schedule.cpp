#include "Schedule.h"
#include <iostream>
#include <iomanip>

Schedule::Schedule() {}

void Schedule::addCourse(const Course& course) {
    std::string timeSlot = course.getTimeSlot();
    schedule[timeSlot].push_back(course);
}

void Schedule::showSchedule() const {
    std::cout << "      |   Mon   |   Tue   |   Wed   |   Thu   |   Fri   |" << std::endl;
    std::cout << "---------------------------------------------------------" << std::endl;

    for (int i = 8; i <= 16; i++) {
        std::cout << std::setw(2) << std::setfill('0') << i << ":00 |";
        for (const auto& [timeSlot, courses] : schedule) {
            int startHour = std::stoi(timeSlot.substr(0, 2));
            if (startHour == i) {
                std::cout << std::setw(9) << std::setfill(' ');
                for (const Course& course : courses) {
                    std::cout << course.getCourseCode() << "-" << course.getSection() << " |";
                }
            }
        }
        std::cout << std::endl;
    }
}
