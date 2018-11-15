#include "catch.hpp"
#include "pointer.h"

Coord3D a = {10, 20, 30};
Coord3D b = {10, 10, 10};
Coord3D c = {120, 140, 110};

TEST_CASE("Distance to origin") {
  REQUIRE(length(&a) == Approx(37.4166));
  REQUIRE(length(&b) == Approx(17.3205));
  REQUIRE(length(&c) == Approx(214.709));
 
}

TEST_CASE("Farther from origin") {
  REQUIRE(fartherFromOrigin(&a, &b) == &a);
  REQUIRE(fartherFromOrigin(&a, &c) == &c);

}

 Coord3D e = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

TEST_CASE("Movement") {
 
  move(&e, &vel, 2.0);
  REQUIRE(e.x == 2);
  REQUIRE(e.y == -10);
  REQUIRE(e.z == 100.4);
}

TEST_CASE("Dynamic") {
  Coord3D *f = createCoord3D(10, 20, 30);
  REQUIRE(f->x == 10);
  REQUIRE(f->y == 20);
  REQUIRE(f->z == 30);
  Coord3D *vem = createCoord3D(5.5, -1.4, 7.77);
  move(f, vem, 10.0);
  REQUIRE(f->x == Approx(65));
  REQUIRE(f->y == Approx(6));
  REQUIRE(f->z == Approx(107.7));
}
