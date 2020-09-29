#include<stdio.h>
#include<string.h>

int main() {

  char n1[]   = "ABC";
  char n2[10] = "DEF";

  printf("Za niz n1 je rezerviranih %d bajtov\n", sizeof(n1));
  printf("Za niz n2 je rezerviranih %d bajtov\n", sizeof(n2));

  // za dolocanje velikosti niza uporabljamo funkcijo strlen
  printf("Dolzina niza %s je %d\n", n1, strlen(n1));
  printf("Dolzina niza %s je %d\n", n2, strlen(n2));


  return 0;
}