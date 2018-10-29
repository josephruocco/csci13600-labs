#include "encrypt.h"

using std::endl;
using std::cout;
using std::cin;

void test_ascii (){
  std::string input; 
  cout << "Input: ";
  cin >> input; 

  for(int i=0; i<input.length(); i++){
    cout << input.substr(i,1) << (int)input[i] << std::endl;
  }
}

char shiftChar(char c, int rshift){

  
  if(!isalpha(c))
    {
      return c;
    }

  if(isupper(c)){
    if((c+ rshift) > 'Z'){
      return (c+rshift) -'Z'+ 'A'- 1;
    }
    else if  (c + rshift < 'A')
     {
       return (c+rshift) - 'A' + 'Z' + 1;
     }
        
  }
  else{
    if((c+rshift) > 'z'){
      return (c+rshift) - 'z' + 'a' - 1;
    }
    else if ((c + rshift) < 'a')
      {
	return (c+rshift) - 'a' + 'z' + 1;
      }
    
  }

  
  return c+rshift;
}

std::string encryptCaesar(std::string plaintext, int rshift){
  std::string encryption ="";
  
  for(int i=0; i < plaintext.length(); i++){
    char c = shiftChar(plaintext[i], rshift);
    encryption += c;
  }

  return encryption; 
}


std::string encryptVignere(std::string plaintext, std::string keyword){

  std::string encryption = "";
  
  int j =0;
  
    for(int i=0; i < plaintext.length(); i++)
    {
      int rshift = keyword[j % keyword.length()] - 'a'; 
      encryption += shiftChar(plaintext[i], rshift);
      if(isalpha(plaintext[i])){
	j++;
      }
      
    }

  return encryption;
}

std::string decryptCaesar(std::string ciphertext,int  rshift){
  std::string decryption ="";
  
  for(int i=0; i < ciphertext.length(); i++){
    char c = shiftChar(ciphertext[i],-rshift);
    decryption += c;
  }
 
  return decryption; 

}

std::string decryptVignere(std::string ciphertext, std::string  keyword){
  std::string encryption = "";
  
  int j =0;
  
    for(int i=0; i < ciphertext.length(); i++)
    {
      int rshift = keyword[j % keyword.length()] - 'a'; 
      encryption += shiftChar(ciphertext[i], -rshift);
      if(isalpha(ciphertext[i])){
	j++;
      }
      
    }

  return encryption;
}
