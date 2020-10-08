/*  
  File : 2dtab.c
*/
#include <stdio.h>

#define N 3

void izpisi(int t[][N]) {
  printf("%d\n", t[2][1]);
}

void izpisiT(int *t, int i, int j) {
  printf("%d\n", t[N*i + j]);
}

int main(int argc, char *args[]) {

  int t[][N] = {1,2,3,4,5,6,7,8};

  izpisi(t);
  izpisiT((int *)t, 1, 1);

  return 0;
}
