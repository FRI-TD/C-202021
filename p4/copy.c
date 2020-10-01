// program prepise vsebino prve datoteke v drugo

#include<stdio.h>

// kopiranje prve datoteke v drugo
int main(int argc, char *args[]) {
  FILE *f;

  if (argc > 2) {
    FILE *vhod;
    FILE *izhod;

    vhod  = fopen(args[1], "r");
    izhod = fopen(args[2], "w");

    if ((vhod != NULL) && (izhod != NULL)) {
      int z;
      while(!feof(vhod)) {
        z = fgetc(vhod);
        if (z != EOF)
          fputc(z, izhod);
      }

      fclose(vhod);
      fclose(izhod);
    } else {
      printf("Datotek ne morem odpreti\n");
    }
  } else {
    printf("Napacno stevilo argumentov!\n");
  }
}