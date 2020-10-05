#include <stdio.h>
#include "cplx.h"

void izpisi(cplx w) {
  printf("%.2f + %.2f i\n", w.re, w.im);
}

int main() {
  cplx w = {1,0};  // 1
  struct cplx z = {0,1};  // i

  izpisi(w);
  izpisi(z);

  typedef int x; // definiram tip z imenom x; 

  typedef char kratkatabela[10]; // tabela velikosti 10
  kratkatabela t1; // === char t1[10];
}
