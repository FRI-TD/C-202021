/*  
  File : rezerviraj.c
*/
#include <stdio.h>
#include <stdlib.h>

// funkcija rezervira prostor velikosti n bajtov
// ce zelim, da se p dejansko spremeni, ga moram
// deklarirati kot "kazalec na kazalec".
void rezerviraj(int **p, int n) {
  *p = malloc(n);
}

int* rezerviraj2(int n) {
  return malloc(n);
}

int main(int argc, char *args[]) {

  int *p;
  rezerviraj(&p, 100);
  p[10]=100;
  free(p);

  p=rezerviraj2(100);
  free(p);

  return 0;
}
