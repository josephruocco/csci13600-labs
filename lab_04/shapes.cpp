  #include "shapes.h"

using std::endl;
using std::cout;
using std::cin;

std::string box(int width, int height){

  std::string result;

  for(int i=0; i< height; i++ ){
    for(int j=1; j <=  width; j++){
         result+= "*";
	 if(j == width){
	    result += "\n";
	 }
    }
  }

    
  return result;

}


std::string checkerboard(int width, int height){
  std::string str;
    for (int row = 0; row < height; ++row) {
        
		for (int col = 0; col < width; ++col) {
		       
		  if (row % 2 == 0){
		    if(col %2 == 0)
			      str+="*";
		    else
		      str+=" ";
			   
		  }
		  else{
		    if(col %2 == 0)
			      str+=" ";
		    else
		      str+="*";
		  }
		}
		str+= "\n";
	}

    return str;
}

std::string cross(int size){

   std::string result2;

   
 for(int k=0; k< size; k++)
   {
     for(int j=0; j<=  size; j++){

       if(size %2 == 0)
       {
	  
       }
	  
       if(j  ==  k)
       {
	 result2 += "*";
       }
       else if(j == (size - k)){
	 result2+= "*";
       }
       else{
	 result2 += " ";
       }

    

       
       if(j == size ){
	 result2 += "\n";
       }

     }
  }

   return result2;
    
}


std::string lower(int length){

  std::string str;
  
  for(int i=0; i< length; i++){
    for(int j=0; j<=i; j++){
      str+= "*";

    }
    str+= "\n";
  }


  return str;

}

std::string upper(int length){

  std::string str;
  
  for(int i= 0; i < length; i++){
    for(int j=0; j<=length; j++){
      if(j <= i){
	str+= " ";
      }
      else{
	str+= "*";
      }

    }
    str+= "\n";
  }


  return str;

}

std::string trapezoid(int width, int height){
  std::string str;
  int spaces = 0;
  int stars = width;

  for(int i=0; i< height; i++){
     for(int j= 0; j < stars+spaces; j++){
      if (height % 6 == 1) { 
	return "Impossible shape!\n";
	
      }
      if(j <  spaces){
	str+= " ";
      }
      else{
	str+= "*";
      }
      
    }
    spaces += 1;
    stars -= 2;
    str+="\n";
  }

  return str;

}

std::string checkerboard_three(int width, int height)
{
  
  std::string str;
    for (int i = 0; i < height; ++i) {
      for (int j = 0; j < width; j++) {
            if (((j / 3) & 1) ^ ((i / 3) & 1))
                str+= " ";
	    else
	      str+= '*';

        
        }

        str += '\n';
    }

    return str;

}

