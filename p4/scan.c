// program prebere vsebino datoteke s pomocjo fscanf ukaza
#include<stdio.h>

int main(int argc, char *args[]) {
  FILE *f;

  if (argc > 1) {
    f = fopen(args[1], "r");
    if (f != NULL) {
      
      int x;
      do {
        int koliko = fscanf(f, "%d", &x);
        if (koliko <= 0) break;

        printf("%d\n", x);
      } while (1==1);
      
      fclose(f);
    } else {
      printf("datoteke '%s' ne morem odpreti\n", args[1]);
    }
  } else {
    printf("Napacno stevilo argumentov!\n");
  }
}