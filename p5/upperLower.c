#include <stdio.h>
#include <string.h>

// niz spremeni v velike crke tako, da ugasne 6. bit
void up(char t[]) {
 for (int i = 0; i < strlen(t); i++)
   if (t[i] >='a' && t[i] <='z')
     t[i] &= ~32;
}

// niz spremeni v male crke tako, da prizge 6. bit
void down(char t[]) {
 for (int i = 0; i < strlen(t); i++)
   if (t[i] >='A' && t[i] <='Z')
     t[i] |= 32;
}

int main() {
  char niz[]="To je testno BeseDILO.";

  up(niz);
  printf("%s\n", niz);

  down(niz);
  printf("%s\n", niz);

}