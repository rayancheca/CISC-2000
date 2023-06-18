#include "Time.h"

Time::Time(const std::string& day, int start_time, int end_time) {
    setDay(day);
    setStartTime(start_time);
    setEndTime(end_time);
}

std::string Time::getDay() const {
    return day;
}

void Time::setDay(const std::string& day) {
    this->day = day;
}

int Time::getStartTime() const {
    return start_time;
}

void Time::setStartTime(int start_time) {
    this->start_time = start_time;
}

int Time::getEndTime() const {
    return end_time;
}

void Time::setEndTime(int end_time) {
    this->end_time = end_time;
}
