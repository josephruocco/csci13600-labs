
#include "catch.hpp"
#include "myvector.h"

using std::string;

TEST_CASE("Insert at Location, int ")
{

   MyVector<int> test1;

  test1.push_back(32);
  test1.push_back(423);
  test1.push_back(234);
  test1.push_back(5);

  CHECK(test1[0] == 32);
  CHECK(test1[1] == 423);
  CHECK(test1[2] == 234);
  CHECK(test1[3] == 5);
}

TEST_CASE("Insert at Index, int")
{
   MyVector<int> test1;

  test1.push_back(32);
  test1.push_back(423);
  test1.push_back(234);
  test1.push_back(423);

  MyVector<int> test2;

   test2.push_back(32);
   test2.push_back(423);
  test2.push_back(234);
  test2.push_back(423);

  test1.insert(4, 3);
    CHECK(test1[3] == 4);

    test2.insert(54,2);
    CHECK(test2[2] == 54);
}

TEST_CASE("Delete from Location, int")
{
   MyVector<int> test1;

  test1.push_back(32);
  test1.push_back(423);
  test1.push_back(234);
  test1.push_back(423);

  MyVector<int> test2;

   test2.push_back(32);
   test2.push_back(423);
  test2.push_back(234);
  test2.push_back(423);

  test1.pop(1);
  CHECK(test1[1] == 234);

  test2.pop(0);
  CHECK(test2[0] == 423);
}

TEST_CASE("Resize, int")
{
   MyVector<int> test1;

  test1.push_back(32);
  test1.push_back(423);
  test1.push_back(234);
  test1.push_back(423);

  MyVector<int> test2;

   test2.push_back(32);
   test2.push_back(423);
  test2.push_back(234);
  test2.push_back(423);
  
  test1.resize();
  CHECK(test1[3] == 423);

  test2.resize();
  CHECK(test2[0] == 32);
}

TEST_CASE("Insert at Location, string")
{

   MyVector<string> test1;

  test1.push_back("hello");
  test1.push_back("hi, how are you");
  test1.push_back("hey whats up?" );
  test1.push_back("yo");

  CHECK(test1[0] == "hello");
  CHECK(test1[1] == "hi, how are you");
  CHECK(test1[2] == "hey whats up?");
  CHECK(test1[3] == "yo");
}

TEST_CASE("Insert at Index, string")
{
   MyVector<string> test1;

   test1.push_back("hello");
  test1.push_back("hi, how are you");
  test1.push_back("hey whats up?" );
  test1.push_back("yo");


  MyVector<string> test2;

   test2.push_back("Joe");
   test2.push_back("woe");
  test2.push_back("loe");
  test2.push_back("no");

  test1.insert("yo", 3);
    CHECK(test1[3] == "yo");

    test2.insert("loe",2);
    CHECK(test2[2] == "loe");
}

TEST_CASE("Delete from Location, string")
{
   MyVector<string> test1;

  test1.push_back("hey");
  test1.push_back("ya");
  test1.push_back("grace");
  test1.push_back("spoderman");

  MyVector<string> test2;

   test2.push_back("glock");
   test2.push_back("ice");
  test2.push_back("eat");
  test2.push_back("yup");

  test1.pop(1);
  CHECK(test1[1] == "grace");

  test2.pop(0);
  CHECK(test2[0] == "ice");
}
