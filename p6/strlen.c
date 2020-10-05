#include <stdio.h>

int len1(char niz[]) {
  int i=0;
  while (niz[i] != '\0') i++;
  return i;
}

int len2(char *niz) {
  int i=0;
  while (*(niz+i) != '\0') i++; 
  return i;
}

int len3(char *niz) {
  int i=0;
  while (*niz != '\0') {i++;niz++;} 
  return i;
}



int main() {
  printf("%d\n", len1("ABCDEF"));
  printf("%d\n", len2("ABCDEF"));
  printf("%d\n", len3("ABCDEF"));

  return 0;
}
