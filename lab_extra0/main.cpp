#include "encryptPlus.h"

int main()
{
  string source = "attack each day with an enthusiasm unkown to mankind";

  double* freqs = generateFreqs();

  for(int i = 0; i < 26; i++){
    cout << "#" << i+1 << ": " << freqs[i] << std::endl;
  }
  string encoded = encode(source,5);
  
  string decoded = decode(encoded, freqs);

  cout << "Source: " << source << "\n";
  cout << "ENCRYPTING" << std::endl;
  cout << "Encoded: " << encoded << "\n";
  cout << "DECRYPTING" << std::endl;
  cout << "Decoded: " << decoded << "\n";

  return 0;
}
