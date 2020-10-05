#include <stdio.h>

int main() {

  int tab[] = {1,2,3,4,5};

  int *pa;

  pa = tab;   // pa = &tab[0]
  *pa = 17;
  *(pa+1) = 20;

  pa[2] = 25;   // *(pa+2)=25


  printf("%p, %p\n", tab, &tab[0]);

  printf("%d %d %d\n", tab[0], tab[1], tab[2]);

  return 0;
}
