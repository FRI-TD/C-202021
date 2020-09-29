#include<stdio.h>

/*
  Program vse znake, ki jih uprabnik vpise na tipkovnico,
  izpisuje na zaslon.
  Tezava: izpis se zgodi šele po tem, ko uporabnik 
          pritisne Enter (branje znak po znaku ne deluje).
  Tezavo v Linux okolju resimo z ukazom 
    system("/bin/stty raw");
*/
int main() {
  int c;
  while ((c=getchar()) != '.')  {
    putchar(c);
  } 

  return 0;
}