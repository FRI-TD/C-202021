#include<stdio.h>
#include<string.h>

/*
  Tabela vec nizov
*/
int main() {

  char nizi[10][100]; // tabela 10 nizov po 100 znakov

  strcpy(nizi[0], "Prvi niz");     // nizi[0] <- "Prvi niz"
  printf("%s\n", nizi[0]);         // izpis: Prvi niz
  printf("%c\n", nizi[0][3]);      // izpis: i
  printf("%d\n", strlen(nizi[0])); // izpis: 8

  return 0;
}