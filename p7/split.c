/*  
  File : split.c
*/
#include <stdio.h>
#include <string.h>

// Uporaba funkcije strtok za razbitje niza na podnize (glede na podano locilo).
// Tezava funkcije strtok: veckratno locilo. Primer: niz "abc::def" je sestavljen 
// iz treh "podatkov", locenih z dvopicji: prvi podatek: "abc", drugi podatek: "", 
// tretji podatek: "def". Funkcija strtok "prizna" le dva podatka: "abc" in "def".

int main(int argc, char *args[]) {
  
  char niz[]="abc:::def::ghi";
  char locila[]=":";

  char *result = strtok(niz, locila);
  while (result != NULL) {
    printf("%s\n", result);
    result=strtok(NULL, locila);
  }

  printf("%s\n", niz);

  return 0;
}
