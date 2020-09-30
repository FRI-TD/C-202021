#include <stdio.h>

void kodiraj(char besedilo[], char kljuc[]);

extern int N;

int main() {
  char besedilo[]="ABCDEFGH";
  char kljuc[]   ="KLJUC";

  printf("N=%d\n", N);

  printf("Original:  %s\n", besedilo);
  kodiraj(besedilo, kljuc);
  printf("Zakodirano: %s\n", besedilo);
  kodiraj(besedilo, kljuc);
  printf("Odkodirano: %s\n", besedilo);
}
