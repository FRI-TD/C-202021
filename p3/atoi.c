#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int strToInt(char niz[]) {
  // "267"  -> 267
  int rez = 0;
  for(int i=0; i<strlen(niz); i++) {
     rez = (rez*10) + (niz[i]-'0');
  }
  return rez;
}


// sestej prvi in drugi argument, ne smes uporabiti atoi()
int main(int argc, char *args[]) {

  int x = strToInt(args[1]);
  int y = strToInt(args[2]);

  printf("%d+%d=%d\n", x, y, x+y);

  return 0;
}
