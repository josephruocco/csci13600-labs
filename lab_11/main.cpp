#include "recursion.h"

int main(){

  std::cout << "Task A";
  std::cout << std::endl;
  std::cout << "printRange(-2, 10)";
  std::cout << std::endl;
  printRange(-2, 10);
std::cout << std::endl;

 std::cout << std::endl;
  std::cout << "Task B";
  std::cout << std::endl;
  std::cout << "sumRange(1, 3)";
  std::cout << std::endl;
  std::cout << sumRange(1, 3);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "sumRange(-2, 10)";
  std::cout << std::endl;
  std::cout << sumRange(-2, 10);
std::cout << std::endl;

 std::cout << std::endl;
  std::cout << "Task C";
  std::cout << std::endl;
  std::cout << "{12, 17, -5, 3, 7, -15, 27, 5, 13, -21}";
  std::cout << std::endl;
  int arr[10] = {12, 17, -5, 3, 7, -15, 27, 5, 13, -21};
  std::cout << "sumArray(arr, 10)";
  std::cout << std::endl;
  std::cout << sumArray(arr, 10);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "sumArray(arr, 5)";
  std::cout << std::endl;
  std::cout << sumArray(arr, 5);
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << "Task D";
  std::cout << std::endl;
  std::cout << "isAlphanumeric(\"ABCD\")";
  std::cout << std::endl;
  std::cout << isAlphanumeric("ABCD");
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "isAlphanumeric(\"Abcd1234xyz\")";
  std::cout << std::endl;
  std::cout << isAlphanumeric("Abcd1234xyz");
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "isAlphanumeric(\"KLMN 8-7-6\")";
  std::cout << std::endl;
  std::cout << isAlphanumeric("KLMN 8-7-6");
  std::cout << std::endl;


  std::cout << "Task E";
  std::cout << std::endl;
  std::cout << "nestedParens(\"((()))\")";
  std::cout << std::endl;
  std::cout << nestedParens("((()))");
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "nestedParens(\"()\")";
  std::cout << std::endl;
  std::cout << nestedParens("()");
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "nestedParens(\"\")";
  std::cout << std::endl;
  std::cout << nestedParens("");
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "nestedParens(\"(((\")";
  std::cout << std::endl;
  std::cout << nestedParens("(((");
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "nestedParens(\"(()\")";
  std::cout << std::endl;
  std::cout << nestedParens("(()");
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "nestedParens(\")(\")";
  std::cout << std::endl;
  std::cout << nestedParens(")(");
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "nestedParens(\"a(b)c\")";
  std::cout << std::endl;
  std::cout << nestedParens("a(b)c");
std::cout << std::endl;

 std::cout << std::endl;
  std::cout << "Task F";
  std::cout << std::endl;
  int prices[9] = {10, 15, 12, 18, 19, 17, 13, 35, 33};
  std::cout << "divisible(prices, 9)";
  std::cout << std::endl;
  std::cout << divisible(prices, 9);
std::cout << std::endl;
 
  return 0;
}
