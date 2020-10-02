#include <stdio.h>

#define N 2

struct oseba {
  char ime[10];
  char priimek[20];
  int starost;
};

int main() {

  struct oseba o[N];

  for (int i = 0; i < N; i++) {
    printf("Ime: ");     scanf("%s", o[i].ime);
    printf("Priimek: "); scanf("%s", o[i].priimek);
    printf("Starost: "); scanf("%d", &o[i].starost);
  }

  for (int i = 0; i < N; i++) {
    printf("Oseba: %s, %s, %d let\n", o[i].ime, o[i].priimek, o[i].starost);  
  }  

  return 0;
}