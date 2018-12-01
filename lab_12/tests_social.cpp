#include "catch.hpp"
#include "social.h"

TEST_CASE("Class Profile")
{
 Profile p1("marco", "Marco");
  REQUIRE(p1.getUsername() == "marco");
  REQUIRE(p1.getFullName() == "Marco (@marco)");

  p1.setDisplayName("Marco Rossi");
  REQUIRE(p1.getUsername() == "marco");
  REQUIRE(p1.getFullName() == "Marco Rossi (@marco)");

  Profile p2("tarma1", "Tarma Roving");
  REQUIRE(p2.getUsername() == "tarma1");
REQUIRE(p2.getFullName() == "Tarma Roving (@tarma1)");
}

TEST_CASE("Network") {
  Network nw;
  REQUIRE(nw.addUser("mario", "Mario"));
  REQUIRE(nw.addUser("luigi", "Luigi"));
  REQUIRE_FALSE(nw.addUser("mario", "Mario2"));
  REQUIRE_FALSE(nw.addUser("mario 2", "Mario2"));
  REQUIRE_FALSE(nw.addUser("mario-2", "Mario2"));
  for (int i = 2; i < 20; i++) {
    REQUIRE(
        nw.addUser("mario" + std::to_string(i), "Mario" + std::to_string(i)));
  }
  REQUIRE_FALSE(nw.addUser("yoshi", "Yoshi"));
}

TEST_CASE("Network following") {
  Network nw;
  REQUIRE(nw.addUser("mario", "Mario"));
  REQUIRE(nw.addUser("luigi", "Luigi"));
  REQUIRE(nw.addUser("yoshi", "Yoshi"));
  REQUIRE(nw.follow("mario", "luigi"));
  REQUIRE(nw.follow("mario", "yoshi"));
  REQUIRE(nw.follow("luigi", "mario"));
  REQUIRE(nw.follow("luigi", "yoshi"));
  REQUIRE(nw.follow("yoshi", "mario"));
  REQUIRE(nw.follow("yoshi", "luigi"));
  REQUIRE(nw.addUser("wario", "Wario"));
  for (int i = 2; i < 6; i++) {
    REQUIRE(
        nw.addUser("mario" + std::to_string(i), "Mario " + std::to_string(i)));
    REQUIRE(nw.follow("mario" + std::to_string(i), "mario"));
  }
  REQUIRE(nw.follow("mario2", "luigi"));
}

/**
TEST_CASE("Network post") {
  Network nw;
  REQUIRE(nw.addUser("mario", "Mario"));
  REQUIRE(nw.addUser("luigi", "Luigi"));
  REQUIRE(nw.addUser("yoshi", "Yoshi"));
  REQUIRE(nw.follow("mario", "luigi"));
  REQUIRE(nw.follow("luigi", "mario"));
  REQUIRE(nw.follow("luigi", "yoshi"));
  REQUIRE(nw.follow("yoshi", "mario"));
  
  REQUIRE(nw.writePost("mario", "It's a-me, Mario!"));
  REQUIRE(nw.writePost("luigi", "Hey hey!"));
  REQUIRE(nw.writePost("mario", "Hi Luigi!"));
  REQUIRE(nw.writePost("yoshi", "Test 1"));
  REQUIRE(nw.writePost("yoshi", "Test 2"));
  REQUIRE(nw.writePost("luigi", "I just hope this crazy plan of yours works!"));
  REQUIRE(nw.writePost("mario", "My crazy plans always work!"));
  REQUIRE(nw.writePost("yoshi", "Test 3"));
  REQUIRE(nw.writePost("yoshi", "Test 4"));
  REQUIRE(nw.writePost("yoshi", "Test 5"));

}


*/
