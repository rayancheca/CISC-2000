#ifndef SCHEDULE_H
#define SCHEDULE_H

#include "Course.h"
#include <vector>
#include <map>

class Schedule {
public:
    Schedule();

    void addCourse(const Course& course);
    void showSchedule() const;

private:
    std::map<std::string, std::vector<Course>> schedule;
};

#endif
