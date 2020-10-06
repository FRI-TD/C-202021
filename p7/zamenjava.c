/*  
  File : zamenjava.c
*/
#include <stdio.h>

// ce zelim spremeniti vrednost parametrov, moram prejeti kazalec na
// parameter (in ne njegove vrednosti)
void zamenjaj(int *x, int *y) {
  int t=*x;
  *x=*y;
  *y=t;
}

int main(int argc, char *args[]) {
  int a=5;
  int b=7;

  printf("a=%d, b=%d\n", a,b);
  zamenjaj(&a,&b);   // pri klicu podam naslov spr. a in b
  printf("a=%d, b=%d\n", a,b);

  return 0;
}
