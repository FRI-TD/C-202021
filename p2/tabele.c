#include<stdio.h>

int main() {
  
  int t0[10];  // tabela za 10 elementov; ni inicializirana!

  int t1[10]={1,2,3}; // velikost 10; prvi trije el. inicializirani, ostali ne
  
  printf("%d\n", t0[5]);
  printf("t1[5]=%d\n", t1[5]);

  return 0;
}