#include "catch.hpp"
#include "recursion.h"

#define SIZE 10

int ans[10] = {12,29,24,27,34,19,46,51,64,43};
int a[SIZE] = {12, 17, -5, 3, 7, -15, 27, 5, 13, -21};


TEST_CASE("Sum") {
  CHECK(sumRange(-2, 100) == 5047);
  CHECK(sumRange(33, 304) == 45832);
  CHECK(sumRange(33, 34) == 67);
  CHECK(sumRange(33, 33) == 33);
}

TEST_CASE("Sum Array") {
  int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    CHECK(sumArray(arr, size) == 43); // Add all elements
    CHECK(sumArray(arr, 5) == 34); // Add up first five elements
   

    delete[] arr;         // deallocate it
}

TEST_CASE("Is Alphanumeric") {
  CHECK(isAlphanumeric("") == true);
  CHECK(isAlphanumeric("ABCD") == true);
  CHECK(isAlphanumeric("Abcd1234xyz") == true);
  CHECK(isAlphanumeric("KLMN 8-7-6") == false);
}

TEST_CASE("Nested Parentheses") {
  CHECK(nestedParens("()") == true);
  CHECK(nestedParens("") == false);
  CHECK(nestedParens("(((") == false);
  CHECK(nestedParens("(()") == true);
  CHECK(nestedParens(")(") == false);
  CHECK(nestedParens("a(b)c") == false);
}

