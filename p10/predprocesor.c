/*  
  File : predprocesor.c

  Funkcije predprocesorja:
    - vključevanje datotek (include)
    - makro ukazi in definicije (define)
    - pogojno prevajanje (ifdef, ....)

*/
#include <stdio.h>
#include "test.c"

#define N 100
#define forever for(;;)

#define min(X,Y) ((X) < (Y) ? (X) : (Y))
#define kvadrat(x) x*x

#define dprint(exp)  printf(#exp "= %.2f\n", exp)

int minimum(int x, int y) {
  return (x<y?x:y);
}

int main(int argc, char *args[]) {

//  forever
//    printf("%d\n", N);

  int a=5, b=7;

#ifdef min  
  printf("min(%d, %d)=%d\n", a, b, mun(a++,b++));
#endif  

  printf("min(%d, %d)=%d\n", a, b, minimum(a++,b++));

  int x=10;
  printf("kvadrat(%d)=%d\n", x, kvadrat(x++));
  printf("%d\n", x);

  double a1=7, a2=2;
  dprint(a1/a2);


  return 0;
}
