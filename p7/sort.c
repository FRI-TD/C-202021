/*  
  File : sort.c
*/
#include <stdio.h>

// Funkcija za primerjavo dve stevil. Ker gre za implementacijo genericnega 
// prototipa cmpfunc_t, morajo biti parametri tipa "void *"; s type-casetom 
// jih kasneje lahko "spremenim" v dejanski tip.
int primerjalnik(const void *elem1, const void *elem2) {
  int x1 = *((int *) elem1);
  int x2 = *((int *) elem2);

  return x2 - x1;
}

int main(int argc, char *args[]) {

  int t[] = {4,6,1,2,9,8,0,5,3,7};

  qsort(t, 10, sizeof(int), &primerjalnik);

  for (int i = 0; i < 10; i++)
  {
    printf("%d ", t[i]);
  }
  printf("\n");

  

  return 0;
}
