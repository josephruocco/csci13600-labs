#include "catch.hpp"
#include "numbers.h"

TEST_CASE("isDivisibleBy tests") {
  CHECK(isDivisibleBy(200, 50) == true);
  CHECK(isDivisibleBy(38, 17) == false);
}

TEST_CASE("Count primes"){
 CHECK(countPrimes(7, 13) == 3);
 CHECK(countPrimes(6311,6673)== 40);
 
}

TEST_CASE("Largest twin prime") {
  CHECK(largestTwinPrime(1, 31) ==31);
  CHECK(largestTwinPrime(14, 16) == -1);
}

TEST_CASE("Twin primes") {
  CHECK(isTwinPrime(101));
  CHECK(isTwinPrime(881));
  CHECK(isTwinPrime(599));
}

TEST_CASE("Next twin prime") {
  CHECK(nextTwinPrime(3) ==  4);
  CHECK(nextTwinPrime(5) ==  7);
}

TEST_CASE("Prime") {
  CHECK(isPrime(2));
  CHECK(isPrime(3));
}

TEST_CASE("Next Prime") {
  CHECK(nextPrime(100)  == 101);
  CHECK(nextPrime(580) == 587);
}
