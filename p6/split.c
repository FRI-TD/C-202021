#include <stdio.h>
#include <string.h>

// vraca znake danega niza; ko pride do konca, vrne -1
int poZnakih(char niz[]) {
  static int i;
  static char *mNiz;

  if (niz != NULL) {
    mNiz = niz;
    i=0;
  }

  if (i<strlen(mNiz)) {
    return mNiz[i++];
  } else
    return -1;
}

int main() {
  int znak = poZnakih("PONEDELJEK");
  while (znak != -1) {
    printf("%c\n", znak);
    znak = poZnakih(NULL);
  }

  return 0;
}
