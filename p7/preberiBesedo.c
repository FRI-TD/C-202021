/*  
  File : preberiBesedo.c
*/
#include <stdio.h>
#include <stdlib.h>

// Funkcija preberiBesedo alocira prostor in vanj prebere vrednost. 
// To je slaba praksa - ko poklicem funkcijo preberiBesedo, se ne 
// zavedam, da je bilo treba rezervirati prostor in zato pozabim, 
// da ga moram sprostiti (free). 
char * preberiBesedo() {
  char *beseda=(char *) malloc(10*sizeof(char));
  scanf("%s", beseda);

  return beseda;
}

int main(int argc, char **args) {

  char *beseda = preberiBesedo();

  printf("Beseda: %s\n", beseda);

  free(beseda);

  return 0;
}
