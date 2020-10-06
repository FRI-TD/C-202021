#include<stdio.h>

int main() {
  int x = 15;
  printf("%08X\n", x);  // -> 0000000F

  int *px = &x;
  *px = 42;
  printf("%08X\n", x);  // -> 0000002A

  char *cx = (char*) &x;
  *(cx+0)=(char) 1;
  *(cx+1)=(char) 2;
  *(cx+2)=(char) 3;
  *(cx+3)=(char) 4;

  printf("%08X\n", x);  // -> 04030201
}