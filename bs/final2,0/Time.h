#ifndef TIME_H
#define TIME_H

#include <string>

class Time {
private:
    std::string day;
    int start_time;
    int end_time;

public:
    Time() {}
    Time(const std::string& day, int start_time, int end_time);

    std::string getDay() const;
    void setDay(const std::string& day);
    int getStartTime() const;
    void setStartTime(int start_time);
    int getEndTime() const;
    void setEndTime(int end_time);
};

#endif // TIME_H
