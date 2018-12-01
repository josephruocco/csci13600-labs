#include "social.h"

Profile::Profile(string usrn, string dspn){
      username = usrn;
      displayname = dspn;
}
    // Default Profile constructor (username="", displayname="")
Profile::Profile(){
      username = "";
      displayname = "";
}

string Profile::getUsername(){
  return username;
  
}
    // Return name in the format: "displayname (@username)"
string Profile::getFullName(){
  return displayname + " (@" + username + ")";
}
    // Change display name
void Profile::setDisplayName(string dspn){
  displayname = dspn;

}

bool Network::addUser(string usrn, string dspn){
  
  for(int i =0; i < MAX_USERS; ++i){
    if( profiles[i].getUsername() == usrn){
      return false;
    }
  }

  for(int j =0; j < usrn.length(); ++j){
    if(!isalpha(usrn[j]) && !isdigit(usrn[j]))
      return false;
  }

  if (numUsers == MAX_USERS){
    return false;
  }

  Profile newp(usrn, dspn);
  numUsers++;
  profiles[numUsers] = newp;

  return true;
}

bool Network::follow(string usrn1, string usrn2){

  bool follow = false;
  
  for(int row = 0; row < MAX_USERS; row++){
    if(profiles[row].getUsername() == usrn1){
      for(int col =0; col < MAX_USERS; col++){{
	  if(profiles[col].getUsername() == usrn2){
	    following[row][col] = true;
	    follow =  true;
	  }
	}
    }
  }
    
}
  return follow;
}

void  Network::printDot(){

  cout << "digraph {" << endl;
  
  for (int i =0; i < numUsers; i++){
    cout << "\t"  << "\"" << profiles[i].getUsername() << "\"" << endl;
  }

  cout << endl;

  for(int row = 0; row < numUsers; row++){
   
    for(int col = 0; col < numUsers; col++){
	if(following[row][col]){
	  cout << "\"" << profiles[row].getUsername() << "\"" << "->" << " \"" <<
	    profiles[col].getUsername() << "\"" << endl;
	}
    
  }

  }
  
}
  
