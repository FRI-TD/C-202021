/*  
  File : tabelatabel.c
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[]) {

  int **tabela;
  tabela = (int**) malloc(4 * sizeof(int *));

  tabela[0] = malloc(2*sizeof(int));
  tabela[1] = malloc(4*sizeof(int));
  tabela[2] = malloc(2*sizeof(int));
  tabela[3] = malloc(4*sizeof(int));

  tabela[0][1] = 5;
  tabela[1][3] = 7;    // OK
  tabela[0][3] = 15;   // pozor: PREPOVEDANO!

  return 0;
}
