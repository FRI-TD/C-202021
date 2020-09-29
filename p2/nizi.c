#include<stdio.h>

int main() {
  int j=0x41424344;
  // to ni prava inicializacija niza, saj ne vsebuje null terminatorja!
  char niz[] = {'L', 'o', 'j', 'z', 'e'}; 

  // deklaracija in inicializacija spr. "ime"
  char ime[] = "Miha";   // -> {'M', 'i', 'h', 'a', '\0'}


  printf("Ime: %s\n", ime);
  printf("Prva crka: %c\n", ime[0]);

  return 0;
}