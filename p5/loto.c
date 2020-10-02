#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 7

// program izpise 7 razlicnih nakljucnih stevil, urejenih po velikosti


// urejanje BubbleSort
void uredi(int n, int t[]) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n-1; j++) {
      // primerjamo t[j] in t[j+1] in ...
      if (t[j] > t[j+1]) {
        // ... zamenjamo
        t[j]   = t[j] ^ t[j+1];
        t[j+1] = t[j] ^ t[j+1];
        t[j]   = t[j] ^ t[j+1];
      }
    }
  }  
}

int main() {
  srand(time(NULL));

  int loto[N];

  // ustvarimo 7 stevil, ki se ne ponovijo
  for (int i = 0; i < N; i++) {
    loto[i] = 1 + rand() % 39;

    bool nasel=false;
    for (int k = 0; k < i; k++) {
      if (loto[k] == loto[i]) {
        nasel=true; 
        break;
      }
    }
    
    if (nasel) i--;
  }
  
  //stevila uredimo
  uredi(N, loto);

  // stevila izpisemo
  for (int i = 0; i < N; i++) {
    printf("%d ", loto[i]);
  }
  printf("\n");
  

}