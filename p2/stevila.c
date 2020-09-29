#include<stdio.h>

/*
  Program bere stevila, dokler uporabnik ne vpise 0, nato
  izpise najvecje prebrano stevilo.
*/
int main() {
  int i;

  // obvezna inicializacija na zacetku!
  int max=0;
  do {    
    printf("Vpisi stevilo: ");  
    scanf("%d", &i); // OBVEZNA uporaba operatorja &
    if (i != 0 && i > max)
      max = i;
  } while (i != 0);

  printf("Najvecje stevilo: %d\n", max);

  return 0;
}

