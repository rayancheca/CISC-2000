/*
              Name: Rayan Checa
        Assignment: Marahon times
	      Due Date: 03/03/2023	       
       Description: 
              File: Marathon.cpp
*/

#include <iostream>
using namespace std;

// A struct representing a Timer with hours, minutes and seconds.
struct Timer {
    int hours;
    int minutes;
    int seconds;
};

// Compares two Timer objects and returns:
// -1 if the first Timer is earlier than the second Timer
//  0 if the two Timers are equal
//  1 if the first Timer is later than the second Timer
int compareTimer(Timer timer1, Timer timer2);

//Function to find the minimum and the maximum Timer in an array of Timers
void findMinMaxTimer(Timer *timerArray, int size, Timer &min, Timer &max);

//Function to read a Timer in the format of hours:minutes:seconds
void readTimer(Timer &timer);

//Function to create a dynamically allocated array of 
//Timers and return a pointer to the array.
Timer* createTimerArray(int size);


int main() 
{
    int size;

    cout << "How many Timers do you need? ";
    cin >> size;

    while (size <= 0) 
    {
        cout << "Enter a positive value!" << endl;
        cout << "How many Timers do you need? ";
        cin >> size;
    }

    Timer *timerArray = createTimerArray(size);
    Timer min, max;

    findMinMaxTimer(timerArray, size, min, max);

    cout << "The minimum Timer is: " << min.hours << ":" << min.minutes << ":" << min.seconds << endl;
    cout << "The maximum Timer is: " << max.hours << ":" << max.minutes << ":" << max.seconds << endl;

    delete[] timerArray;

    return 0;
}

int compareTimer(Timer timer1, Timer timer2) 
{
    if (timer1.hours < timer2.hours)
        return -1;
    else if (timer1.hours == timer2.hours) {
        if (timer1.minutes < timer2.minutes)
            return -1;
        else if (timer1.minutes == timer2.minutes) {
            if (timer1.seconds < timer2.seconds)
                return -1;
            else if (timer1.seconds == timer2.seconds)
                return 0;
            else 
                return 1;
        }
        else 
            return 1;
    }
    else
        return 1;
}

void findMinMaxTimer(Timer *timerArray, int size, Timer &min, Timer &max) 
{
    min = timerArray[0];
    max = timerArray[0];

    for (int i = 0; i < size; i++) {
        // compare current timer value with min
        if (compareTimer(timerArray[i], min) == -1) 
            min = timerArray[i];
        // compare current timer value with max
        if (compareTimer(timerArray[i], max) == 1)
            max = timerArray[i];
    }
}

void readTimer(Timer &timer) 
{
    char aChar;
    cin >> timer.hours >> aChar >> timer.minutes >> aChar >> timer.seconds;
    if (timer.hours < 0 || timer.minutes < 0 || timer.seconds < 0 || timer.minutes >= 60 || timer.seconds >= 60) {
        cout << "Invalid Timer!" << endl;
        cout << "Enter a Timer as hours:minutes:seconds(h:m:s)? ";
        readTimer(timer);
    }
}

Timer* createTimerArray(int size) 
{
    Timer *timerArray;
    timerArray = new Timer[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter a Timer as hours:minutes:seconds(h:m:s)? ";
        readTimer(timerArray[i]);
    }
    return timerArray;
}