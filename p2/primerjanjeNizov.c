#include<stdio.h>
#include<string.h>

int main() { 
  char n1[]   = "ABCXYZ";
  char n2[10] = "ABC";
  char n3[]   = "def";

  // TO JE NAPAČNO PRIMERJANJE!!!
  if (n1 == n2) 
    printf("Sta enaka\n");
  else
    printf("Nista enaka\n");

  // PRAVILNO!
  if (strcmp(n1,n2)==0)
    printf("Sta enaka\n");
  else
    printf("Nista enaka\n");


  return 0;
}