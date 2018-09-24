
#include "func.h"

 int main(){

  
   double test =  east_storage("05/20/2016");
   std::cout << test << std:: endl;

   double test1 = min_storage();
    std::cout << test1 << std:: endl;

   double test2 = max_storage();
    std::cout << test2 << std:: endl;

    std::string test3 = compare("09/13/2016" , "09/17/2016");
    std::cout << test3 << std::endl;

    std::string test4 = reverse("05/29/2016", "06/02/2016");
    std::cout << test4 << std::endl;
    
   return 0;
}
