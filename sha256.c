// Cathal Ryan 2019
// The Secure Hash Algorithm, 256 bit Version

#include <stdio.h>
#include <stdint.h>

void sha256();

int main(int argc, char *argv[]){

  sha256();

  return 0;
}

void sha256(){
  
  //Message Schedule
  uint32_t W[64];
  //Working variables
  uint32_t a, b, c, d, e, f, g;
  // The Hash value.
  uint32_t H[8];
  //Temporary Variables
  uint32_t T1, T2;

}
