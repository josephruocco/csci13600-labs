#include "time.h"

int minutesSinceMidnight(Time time){ 
  return time.h*60 + time.m;
}

int minutesUntil(Time earlier, Time later){
  return ((earlier.h - later.h)*60) + (earlier.m - later.m);

}


Time addMinutes(Time time0, int min) {
  int m = time0.m + min;
  Time time1 = {time0.h + m / 60, m % 60};
  return time1;
}
 



string printTimeSlot(TimeSlot ts){
  Time t1 = addMinutes(ts.startTime, ts.movie.duration);

  string g;
    switch (ts.movie.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }

    std::string min = std::to_string(t1.m);
    if(min.length() < 2){
    min = '0' + min;
    }

    std::string start_min = std::to_string(ts.startTime.m);
    if(start_min.length() < 2){
     start_min = '0' + start_min;
    }
   
    
  return ts.movie.title + " " + g + " (" + std::to_string(ts.movie.duration) + " min) " +  "[starts at " + std::to_string(ts.startTime.h) + ":" + start_min + ", ends by " + std::to_string(t1.h) + ":" + min  + "]";

} 

  
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
  // 
  TimeSlot ts1 = {nextMovie, addMinutes(ts.startTime, ts.movie.duration)};

  return ts1;
}
  
bool timeOverlap(TimeSlot ts1, TimeSlot ts2) {
  if(minutesSinceMidnight(ts1.startTime) < minutesSinceMidnight(addMinutes(ts2.startTime, ts2.movie.duration)) && minutesSinceMidnight(ts2.startTime) < minutesSinceMidnight(addMinutes(ts1.startTime, ts1.movie.duration)))
    {
    return true;
  }
  
}

