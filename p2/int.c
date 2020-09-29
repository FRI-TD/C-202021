#include<stdio.h>

/*
  Kaj izpise spodnji program?

  odogovor: ker spremenljivke i nismo inicializirali, 
  je izpis programa lahko karkoli. 
  Izkaze se celo, da pri vsakem zagonu program izpise
  drugo vrednost. Zakaj: ker izpisuje vrednost na skladu, 
  ta pa se spreminja.
*/
int main() {
  int i;
  printf("%d\n", i);

  return 0;
}
