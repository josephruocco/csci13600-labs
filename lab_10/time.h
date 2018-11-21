#pragma once

#include <iostream>
#include <cmath>

using std::string;
using std::cin;
using std::cout;

enum Genre {
  ACTION,
  COMEDY,
  DRAMA,
  ROMANCE,
  THRILLER
};

class Time { 
public:
    int h;
    int m;
};


class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};


int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);
Time addMinutes(Time time0, int min);

string printTimeSlot(TimeSlot ts);

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);

bool timeOverlap(TimeSlot ts1, TimeSlot ts2);
