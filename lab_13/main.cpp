#include "myvector.h"


int main()
{

  cout << "Task A ";
  cout << endl;
  cout << "My Vector: test1 = {11, 124, 22, 73}" << endl;

  cout<<endl;
  
  MyVector<int> test1;
  
  test1.push_back(11);
  test1.push_back(124);
  test1.push_back(22);
  test1.push_back(73);

  cout << "Task B " << endl;

  
  cout << "Insert 4 at position 3." << endl;

  test1.insert(4, 3);
  
  for(int i = 0; i < test1.getSize(); i++){
    cout << test1[i] << " ";
  }

  cout << endl;
  cout << endl;

 
  cout<< "Task C" << endl;
  cout<< "Insert 324 value at the end." << endl;

  test1.push_back( 324);
  
  for(int i = 0; i <   test1.getSize(); i++)
    {
      cout << test1[i] << " ";
    }
  
  cout<< endl;
  cout << endl;

  cout <<"Task D" << endl;
  cout << "Delete position 4." << endl;

  test1.pop(4);
  
  for(int i = 0; i <  test1.getSize(); i++)
    {
      cout << test1[i] << " ";

    }

  /**
  cout<< endl;
  cout << endl;

  cout << "Resizing the vector." << endl;
  cout << "Resize to 2." << endl;

  test1.resize();
   size = test1.getSize();

  for(int i = 0; i < size; i++)
    {
      cout << test1[i] << " ";
    }	



  //*/
  return 0;
  
}
