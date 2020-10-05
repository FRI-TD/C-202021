#include <stdio.h>
#include "../p5/cplx.h"

cplx sestej(cplx x1, cplx x2) {    // x1 in x2 zivita na skladu
  cplx r;                          // r zivi na skladu
  r.re = x1.re + x2.re;            // r.re, r.im sta dva "elementa" sklada
  r.im = x1.im + x2.im;
  return r;                        // kaj se vrne? 
}

int main() {
  cplx a = {1,2};  // 1 + 2*i                              // S
  cplx b = {3,4};                                          // S

  cplx vsota = sestej(a,b);            

  printf("Vsota: %.2f + %.2f*i\n", vsota.re, vsota.im);
}
