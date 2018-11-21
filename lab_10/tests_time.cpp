#include "catch.hpp"
#include "time.h"

TEST_CASE("Minutes since midnight") {
  for (int i = 0; i < 100; i++) {
    REQUIRE(minutesSinceMidnight(Time{i / 60, i % 60}) == i);
  }
}

TEST_CASE("Minutes until") {
  REQUIRE(minutesUntil(Time{10, 30}, Time{13, 40}) == -190);
  REQUIRE(minutesUntil(Time{13, 40}, Time{10, 30}) == 190);
}

TEST_CASE("Print time slot") {
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  Movie movie2 = {"Black Panther", ACTION, 134};
  TimeSlot morning = {movie1, {9, 15}};
  TimeSlot daytime = {movie2, {12, 15}};
  TimeSlot evening = {movie2, {16, 45}};

  REQUIRE(printTimeSlot(morning) == "Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11]");
  REQUIRE(printTimeSlot(daytime) == "Black Panther ACTION (134 min) [starts at 12:15, ends by 14:29]");
  REQUIRE(printTimeSlot(evening) == "Black Panther ACTION (134 min) [starts at 16:45, ends by 18:59]");
}


TEST_CASE("Schedule after") {
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  TimeSlot morning = {movie1, {9, 15}};
  TimeSlot morningafter = scheduleAfter(morning, movie1);
  REQUIRE(printTimeSlot(morningafter) == "Back to the Future COMEDY (116 min) [starts at 11:11, ends by 13:07]");
  morningafter = scheduleAfter(morningafter, movie1);
  REQUIRE(printTimeSlot(morningafter) == "Back to the Future COMEDY (116 min) [starts at 13:07, ends by 15:03]");
  morningafter = scheduleAfter(morningafter, movie1);
  REQUIRE(printTimeSlot(morningafter) == "Back to the Future COMEDY (116 min) [starts at 15:03, ends by 16:59]");
  morningafter = scheduleAfter(morningafter, movie1);
  REQUIRE(printTimeSlot(morningafter) == "Back to the Future COMEDY (116 min) [starts at 16:59, ends by 18:55]");
}

TEST_CASE("Time overlap") {
  Movie movie1 = {"Back to the Future", COMEDY, 116};
  TimeSlot morning = {movie1, {9, 15}};
  TimeSlot morningafter = scheduleAfter(morning, movie1);
  REQUIRE_FALSE(timeOverlap(morning, morningafter));
  for (int i = 0; i < 116; i++) {
    REQUIRE(timeOverlap(morning, TimeSlot{movie1, addMinutes(morning.startTime, i)}));
  }
}


