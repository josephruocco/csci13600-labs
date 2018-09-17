#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "pig.h"

TEST_CASE("word starts with vowel") {
  CHECK(piglatinify("eat") == "eatay");
}

TEST_CASE("word starts with consonant") {
  CHECK(piglatinify("hello") == "ellohay");
}

TEST_CASE("sentences with punctuation") {
  CHECK(piglatinify("hello eat.") == "ellohay eatay.");
}
