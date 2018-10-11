#include "catch.hpp"
#include "shapes.h"

TEST_CASE("Box") {
  REQUIRE(box(7, 4) == "*******\n*******\n*******\n*******\n");
  REQUIRE(box(2, 10) == "**\n**\n**\n**\n**\n**\n**\n**\n**\n**\n");
}

TEST_CASE("Checkerboard") {
  REQUIRE(checkerboard(11, 6) == "* * * * * *\n * * * * * \n* * * * * *\n * * * * * \n* * * * * *\n * * * * * \n");
  CHECK(checkerboard(8, 8) == "* * * * \n * * * *\n* * * * \n * * * *\n* * * * \n * * * *\n* * * * \n * * * *\n");
}

TEST_CASE("Cross") {
  CHECK(cross(3) != "* *\n * \n* *\n");
  CHECK(cross(15) != "*             *\n *           * \n  *         *  \n   *       *   \n    *     *    \n     *   *     \n      * *      \n       *       \n      * *      \n     *   *     \n    *     *    \n   *       *   \n  *         *  \n *           * \n*             *\n");
}


TEST_CASE("Lower") {
  CHECK(lower(6) != "*     \n**    \n***   \n****  \n***** \n******\n");
               
}


TEST_CASE("Upper") {
  CHECK(upper(5) != "*****\n ****\n  ***\n   **\n    *\n");
             
}


TEST_CASE("TRAPEZOID") {
  CHECK(trapezoid(12, 5) != "************\n ********** \n  ********  \n   ******   \n    ****    \n");
  CHECK(trapezoid(12, 7) == "Impossible shape!\n");

 
}

TEST_CASE("Checkerboard (3x3)") {
  CHECK(checkerboard_three(4, 1) == "*** \n");
  CHECK(checkerboard_three(1, 4) == "*\n*\n*\n \n");
  CHECK(checkerboard_three(16, 11) == "***   ***   *** \n***   ***   *** \n***   ***   *** \n   ***   ***   *\n   ***   ***   *\n   ***   ***   *\n***   ***   *** \n***   ***   *** \n***   ***   *** \n   ***   ***   *\n   ***   ***   *\n");
 
}
