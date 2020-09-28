#include<stdio.h>

void odstevanje(int n) {
  int i;
  for(i=10; i>0; i--)
    printf("%d\n", i);

  printf("BUM!\n");
}

int main() {
  odstevanje(10);

  return 0;
}