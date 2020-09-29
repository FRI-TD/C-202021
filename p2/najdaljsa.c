#include<stdio.h>
#include<string.h>

/*
  Program bere vrstice iz standardnega vhoda, dokler
  uporabnik ne vpiše prazne vrstice.
  Na koncu proram izpise najdaljso prebrano vrstico.
*/
int main() {
  int n=100; // najdaljša dolzina vrstice

  char trenutna[n];

  char najdaljsa[n];    
  strcpy(najdaljsa,"");  // inicializacija najdaljse prebrane vrstice

  do {
    // fgets ne preseze omejitve spremenljivke trenutna, 
    // saj smo v "max" povedali, koliko je ta spr. velika.
    fgets(trenutna, n-1, stdin); 

    if (strlen(trenutna) > strlen(najdaljsa))
      strcpy(najdaljsa, trenutna);

  } while (strlen(trenutna)>1);

  printf("Najdaljsa: %s\n", najdaljsa);

  return 0;
}