/*  
  File : podnizi.c

  Uporaba funkcije strstr za iskanje podnizov.
  
*/
#include <stdio.h>
#include <string.h>

int main(int argc, char *args[]) {

  char niz[]="To je moj niz\n";
  char *p=strstr(niz, " ");

  printf("%p %p\n", niz, p);
  printf("%s\n", p);

  p = niz;
  while (p != NULL) {
    printf("%s\n",p);
    p = strstr(p, " ");
    if (p!=NULL)
      p++;
  }
  
  return 0;
}
