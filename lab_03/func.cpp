#include "func.h"

using std::endl;
using std::cout;
using std::cin;
  
std::string date;
double eastSt;
double eastEL;
double  westSt;
double  westEl;

double east_storage(std::string s)

{
        std::ifstream fin ("Current_Reservoir_Levels.tsv");
        if (fin.fail()) {
	  std::cerr << "File cannot be opened for reading." << std::endl;
	  exit(1); // exit if failed to open the file
	}

	 std::string junk;        // new string variable
         getline(fin, junk); // read one line from the file 

	 while(fin >> date >> eastSt >> eastEL >> westSt >> westEl )
	  {

	        fin.ignore(INT_MAX, '\n');

		
                if(s == date){
	      	 
		    break;
		}
          }

	  fin.close();

	  return eastSt; 
 
}

double min_storage(){
   std::ifstream fin ("Current_Reservoir_Levels.tsv");
        if (fin.fail()) {
	  std::cerr << "File cannot be opened for reading." << std::endl;
	  exit(1); // exit if failed to open the file
	}

	 std::string junk;        // new string variable
         getline(fin, junk); // read one line from the file 

	 fin >> date >> eastSt >> eastEL >> westSt >> westEl;

	 double  min = eastSt;

	 while(fin >> date >> eastSt >> eastEL >> westSt >> westEl )
	  {

	        fin.ignore(INT_MAX, '\n');

                if(min >  eastSt){
		  
		   min = eastSt;
       
		}
          }

	  fin.close();

	  return min;

}
double max_storage() {
      std::ifstream fin ("Current_Reservoir_Levels.tsv");
        if (fin.fail()) {
	  std::cerr << "File cannot be opened for reading." << std::endl;
	  exit(1); // exit if failed to open the file
	}

	 std::string junk;        // new string variable
         getline(fin, junk); // read one line from the file 

	 fin >> date >> eastSt >> eastEL >> westSt >> westEl;

	 double  max  = eastSt;

	 while(fin >> date >> eastSt >> eastEL >> westSt >> westEl )
	  {

                if(max <  eastSt){
	        
		    max = eastSt;
       
		}
          }

	  fin.close();

	  return max;

}


std::string compare(std::string date1, std::string date2)
{
       

      double  east[365];
      
      double  west[365];
      
      std::string dates[365];
      
       std::ifstream fin ("Current_Reservoir_Levels.tsv");
        if (fin.fail()) {
	        std::cerr << "File cannot be opened for reading." << std::endl;
	        exit(1); // exit if failed to open the file
	}

	 std::string junk;        // new string variable
	 getline(fin, junk); // read one line from the file 
      
	 while(fin >> date >> eastSt >> eastEL >> westSt >> westEl )
	  {

	    fin.ignore(INT_MAX, '\n');

            if(date == date1)
            {
                int i = 1;
                
                 east[0] = eastEL; 
                 west[0] = westEl; 
                 dates[0] = date;
                    
                do{
                    fin >> date >> eastSt >> eastEL >> westSt >> westEl;
                    
                    east[i] = eastEL; 
                    west[i] = westEl; 
                    dates[i] = date;
                    
                    i++;
                }
                while(date2 != date );
                
            
            }
                
		}
		
		std::string str = "";
		int j = 0; 
		
		while (dates[j] != ""){
								   
		  if(east[j] > west[j]){
		            str += dates[j] + " East\n";
		  }
		  else if (east[j] == west[j]){	
		            str += dates[j] + " Equal\n";
		  }
		  else {
		            str+= dates[j] + " West\n";
		  }
		        j++;
		}
 
        return str;
 }


std::string reverse(std::string date1, std::string date2){
      
double   west[365];
      
      std::string dates[365];
      
       std::ifstream fin ("Current_Reservoir_Levels.tsv");
        if (fin.fail()) {
	        std::cerr << "File cannot be opened for reading." << std::endl;
	        exit(1); // exit if failed to open the file
	}

	 std::string junk;        // new string variable
	 getline(fin, junk); // read one line from the file 
      
	 while(fin >> date >> eastSt >> eastEL >> westSt >> westEl )
	  {

	    fin.ignore(INT_MAX, '\n');

            if(date == date1)
            {
                int i = 1;
            
                 west[0] = westEl; 
                 dates[0] = date;
                    
                do{
                    fin >> date >> eastSt >> eastEL >> westSt >> westEl;
                    
                    west[i] = westEl; 
                    dates[i] = date;
                    
                    i++;
                }
                while(date2 != date );
                
            }
                
		}
		
		std::string str = "";
		int j =0;
		
		while (dates[j] != ""){
		  j++;
        
		}

		j-=1;

		while(j >= 0) {
   		  str +=  dates[j] + " " + std::to_string(west[j]).substr(0,6) + " ft\n";
		  j--;
		}

		return str;


}

 

 
