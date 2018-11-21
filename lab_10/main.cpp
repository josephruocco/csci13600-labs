#include "time.h"

int main(){

  std::cout <<  "Task A" << std::endl;

  std::cout << "These moments of time are ";
  Time t1 = {10, 30};
  std::cout << minutesSinceMidnight(t1);
  std::cout << " and ";
   Time t2 = {13, 40};
  std::cout << minutesSinceMidnight(t2);
  std::cout << " minutes after midnight.";
  std::cout << std::endl;
  std::cout << "The interval between them is ";
  Time t3 = {13, 40};
  Time t4 = {10, 30};
  std::cout << minutesSinceMidnight(t3) - minutesSinceMidnight(t4);
  std::cout << " minutes.";
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout <<  "Task B" << std::endl;
  std::cout << std::endl;
  std::cout << "addMinutes({8, 10}, 75)";
  std::cout << std::endl;
  Time q = addMinutes({8, 10}, 75);
  std::cout << q.h;
  std::cout << ":";
  std::cout << q.m;
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout <<  "Task C" ;
  std::cout << std::endl;
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};
  TimeSlot ts1 = {movie1, {9, 15}};
  std::cout << printTimeSlot(ts1) << std::endl;
  TimeSlot ts2 = {movie2, {12, 15}};
  std::cout << printTimeSlot(ts2) << std::endl;
  TimeSlot ts3 = {movie2, {16, 45}};
  std::cout << printTimeSlot(ts3) << std::endl;

  std::cout << std::endl;
  std::cout <<  "Task D" << std::endl;
  TimeSlot showing = {movie1, {9, 15}};
  std::cout << std::endl;
  std::cout << printTimeSlot(scheduleAfter(showing, movie1));
  std::cout << std::endl;
  std::cout << printTimeSlot(scheduleAfter(scheduleAfter(showing, movie1), movie1));
  std::cout << std::endl;
  std::cout << printTimeSlot(scheduleAfter(scheduleAfter(scheduleAfter(showing, movie1), movie1), movie1));
  std::cout << std::endl;
  std::cout << printTimeSlot(scheduleAfter(scheduleAfter(scheduleAfter(scheduleAfter(showing, movie1), movie1), movie1), movie1));
  std::cout << std::endl;
  std::cout << printTimeSlot(scheduleAfter(scheduleAfter(scheduleAfter(scheduleAfter(scheduleAfter(showing, movie1), movie1), movie1), movie1), movie1));
  std::cout << std::endl;

  std::cout << std::endl;
std::cout << "Task E" << std::endl;
  std::cout << std::endl;
  std::cout << "{\"Back to the Future\", COMEDY, 116}";
  std::cout << std::endl;
  std::cout << "timeOverlap(showing, scheduleAfter(showing, movie1))";
  std::cout << std::endl;
  std::cout << timeOverlap(showing, scheduleAfter(showing, movie1));
  std::cout << std::endl;
  std::cout << "timeOverlap(showing, TimeSlot{movie1, addMinutes(showing.startTime, 1)})";
  std::cout << std::endl;
  std::cout << "timeOverlap(showing, TimeSlot{movie1, addMinutes(showing.startTime, 1)})";
  std::cout << std::endl;

  return 0;
}
