#include "catch.hpp"
#include "encrypt.h"

TEST_CASE("Caesar") {
  CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
}

TEST_CASE("Vignere") {
  CHECK(encryptVignere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}

TEST_CASE("Decrypt Caesar"){
  CHECK(decryptCaesar("Bfd yt Lt!" ,5) == "Way to Go!" );
}


TEST_CASE("Decrypt Vignere"){
  CHECK(decryptVignere("Jevpq, Wyvnd!" , "cake") == "Hello, World!" );
}
