// kodiranje besedila s pomocjo XOR operatorja
//  xor je inverzen samemu sebi:  (a ^ b) ^ b = a
//                                (a + b) - b = a        

// TOJEBESEDILO
// KLJUCKLJUCKL

#include<string.h>

int N=5;

void kodiraj(char besedilo[], char kljuc[]) {
  for(int i=0; i<strlen(besedilo); i++)
    besedilo[i] = besedilo[i] ^ kljuc[i % strlen(kljuc)];
}