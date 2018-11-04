#include "pretty.h"

string removeLeadingSpaces(string str) {
    for(int i=0; i<str.length();) {
      //iterate till the end of the string
        if(isspace(str[i])) {
	  //if space is found, then move all
	  //next index characters to its previous
            for(int j=i; j<str.length(); j++)
            str[j] = str[j+1];
           }
           else
                break;
	    //else move to next index position
           }
    
    return str;
}

       int countChar(string line, char c)

         {

          int total = 0;

          for(int i=0; i<line.length(); i++)

        {

           if(line[i] == c)
           total++;

         }

       return total;

      }
