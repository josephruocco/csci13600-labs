#include "catch.hpp"
#include "func.h"


TEST_CASE("East storage") {
  CHECK(east_storage("01/05/2016") == 72.06);
  CHECK(east_storage("09/19/2016") == 61.42);
  CHECK(east_storage("05/01/2016") == 79.79);
}


TEST_CASE("Min/Max") {
  CHECK(min_storage() == 49.34);
  CHECK(max_storage() == 81);
}

TEST_CASE("Compare") {
  CHECK(compare("09/13/2016", "09/17/2016") == "09/13/2016 East\n09/14/2016 East\n09/15/2016 Equal\n09/16/2016 West\n09/17/2016 West\n");
  CHECK(compare("01/01/2016", "01/02/2016") == "01/01/2016 West\n01/02/2016 West\n");
}

TEST_CASE("Reverse order") {
  CHECK(reverse("05/29/2016", "06/02/2016") == "06/02/2016  587.66 ft\n06/01/2016  587.81 ft\n05/31/2016  587.93 ft\n05/30/2016  588.02 ft\n05/29/2016  588.17 ft\n");
  CHECK(reverse("01/01/2016", "01/02/2016") == "01/02/2016  582.44 ft\n01/01/2016  582.48 ft\n");
}
