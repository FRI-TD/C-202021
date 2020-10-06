/*  
  File : structKazalec.c

  Prikaz uporabe kazalca na strukture
*/
#include <stdio.h>
#include "../p5/cplx.h"

int main(int argc, char *args[]) {

  cplx w = {1, 2};  // 1 + 2*i

  cplx *pw = &w;

  // lahko tako, ali pa ...
  (*pw).re = 7;
  // ... tako
  pw->im   = 9;

  printf("%.2f + %.2f i\n", w.re, w.im);

  return 0;
}
