#include "encryptPlus.h"


string encode(string s, int r){
  char c;
  string result="";
  for (int i ; i < s.length(); ++i) {
    c = s[i];
    if (c >= 'a' && c<='z'){
      c  = c - 'a';
      c = (c + r)%26;
      c = c + 'a';
    }
    else if (c >= 'A' && c<='Z'){
      c  = c - 'A';
      c = (c + r)%26;
      c = c + 'A';
    }
    result = result + c;
  }
  return result;
}


double distance(double a[], double b[], int len){
  double sum = 0;
    for (int i = 0; i < len; ++i) {
      sum = sum + (b[i] - a[i]) * (b[i] - a[i]);
    }
    return sqrt(sum);
}

int count_letters(string s, char c){
  int count = 0;
  for (int i = 0; i < s.length(); ++i) {
    if (s[i]==c)
      count++;
  }
  return count;
}

string decode(string s, double freqs[]){
  string test_string;
  int total_letters;
  double test_vector[26];
  double min_dist = 1000;
  double min_index = 0;
  int i;
  double d;
  
  total_letters = s.length();
  int j = total_letters;
  for (i = 0; i < j; ++i) {
    if (s[i]==' ')
      total_letters--;
  }
  for (i = 0; i < 26; ++i) {
    test_string = encode(s,i);  
    for (j = 0; j < 26; j++) {
      d = 1.0*count_letters(test_string,'a'+j) / total_letters;
      test_vector[j] = d;
    }
    double test_distance = distance(freqs,test_vector,26);
    if (test_distance < min_dist){
      min_dist = test_distance;
      min_index = i;
    }
  }

  string decoded = encode(s, min_index);
  return decoded;
}

double*  generateFreqs (){

  static double freqs[26];
  // initialize all values to zero 
  for(int j=0; j < 26; j++){
    freqs[j] = 0;
  }

  std::ifstream fin ("pride.txt");
  if (fin.fail()) {
     std::cerr << "File cannot be opened for reading." << std::endl;
     exit(1); // exit if failed to open the file
  }

  if (fin.fail()){
    std::cout << "File not found" << std::endl;
  }

  string line = "";
  double letters = 0;
  
  while(std::getline(fin, line))
  {
    for(int i=0; i < line.length(); ++i){
      if(isalpha(line[i])){
	freqs[tolower(line[i]) - 'a'] += 1;
	letters += 1;
       }
    }
  }

  for(int t =0; t < 26; t++){
    freqs[t] = 100*(freqs[t]/letters);
  }

  fin.close();
			   
  return freqs; 
}


