#include "recursion.h"

void printRange(int left, int right){
  if(left > right){
    cout << " " << endl;
  }
  else if (left == right){
    cout << left  << " " <<  endl;
  }
  else{
    cout << left << " ";
    printRange(left + 1,right);

  }
}


int sumRange(int left, int right){

  int sum = 0;

  if(left > right){
    return 0;
  }
  else if(left == right){
    sum += left;
  }
  else{
    sum = left + sumRange(left + 1, right);
  }
  
  return sum;
}

int sumArray(int *arr, int size){

  int sum =  sumArrayInRange(arr, 0, size-1);

  return sum;
  
  
}

int sumArrayInRange(int *arr, int left, int right){
  int sum = 0;

  if(left > right){
    return 0;
  }
  else if(left == right){
    sum += arr[left];
  }
  else{
    sum += arr[left] + sumArrayInRange(arr, left + 1, right);
  }
  
  return sum;

}

bool isAlphanumeric(string s){

  bool ans = true;
  
  if(s == ""){
    return true;
  }
  else if(isalpha(s[0]) || isdigit(s[0])){
    ans = isAlphanumeric(s.substr(1));
    
  }
  else {
    return false;
  }

  return ans;
  
}

bool nestedParens(string s){
  
 
  if (s.length() < 2){
    return false;
  }
  if (s.at(0) != '(' ){
    return false;
    
  }
  if(s.at(s.length()-1) != ')')
     {
    return false;
  }
   if(s.length() == 2)
     {
    return true;
  }
  
   return nestedParens(s.substr(1, s.length()-1));


}


bool divisible(int *prices, int size){
  return true;
}
