#include "numbers.h"

using std::endl;
using std::cout;
using std::cin;

bool isDivisibleBy(int n, int d){

  if(n % d == 0 ){
    return true;
  }
  else{
    return false;
  }

}

bool isPrime(int n){
  
  if(n <= 1){
    return false;
  }
  else if(n <= 3){
    return true;
  }
  
  bool check_prime = false;


  for(int i=3; i < n-1; i++ )
    {
      
      if(isDivisibleBy(n,i)){
	return  false;
      }
	
    }
  return true;

}


int nextPrime(int n){

  while(1){

    if(isPrime(n)){
       return n;
    }
    n++;
	 
  }

}


int countPrimes(int a, int b){
  int prime_count = 0;
  for(int i=a; i <= b; i++){
    if(isPrime(i)){
      prime_count++;
    }

  }
  return prime_count;
}

bool isTwinPrime(int n)
{
  bool check_twin = false;
  if (isPrime(n+2)||isPrime(n-2)){
    check_twin = true;
  }
  return check_twin;
}



int nextTwinPrime(int n){
 
  while(!(isPrime(++n))){

  }
  return n; 

}

int largestTwinPrime(int a, int b){
  int num = -1;
  for(int i=a; i<= b; i++){
    if(isTwinPrime(i) && i > num && i-2 > a && i+2 <= b){
      num = i;
    }
    if(isTwinPrime(b)){
      return b;
    }
  }
  return num;

}
