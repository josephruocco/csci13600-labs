#include "pretty.h"

int main (){

  std::string line;
  std::string result;
  
  int openBlocks  = 0;
  
  while(getline(cin, line)){
    
    openBlocks  -= countChar(line, '}');
     
    for(int i =0; i < openBlocks; ++i){ result += "\t"; }
     
    result += removeLeadingSpaces(line) + "\n";
    // remove leading whitespace
   
    openBlocks += countChar(line, '{');
     
  }
  cout << result;
  // output test
  
  return 0;
}
