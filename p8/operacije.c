/*  
  File : operacije.c

  Uporaba funkcije kot parametra

*/


#include <stdio.h>
#include <math.h>

typedef int operacija(int, int);

int add(int x, int y) {
  return x+y;
}
int mul(int x, int y) {
  return x*y;
}

double trig(double (*f)(double), double x) {
  return f(x);
}


int main(int argc, char *args[]) {

  int kaj = 1; // 0 ... add, 1 ... mul, 2 ... sub, 3 ... div
  
  operacija *op;
  if (kaj == 0)
    op=add;
  else if (kaj==1)
    op=mul;

  int rezultat = op(5,7);
  printf("%d\n", rezultat);  

  double r = trig(acos, 0);
  printf("%.2f\n", r);

  return 0;
}
