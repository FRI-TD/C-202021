/*  
  File : copy.c
*/
#include <stdio.h>
#include <stdlib.h>

#define N 4096

int main(int argc, char *args[]) {
  if (argc != 3) {
    printf("Potrebujem dva argumenta.\n");
    exit(1);
  }

  char *from = args[1]; // ime vhodne datoteke
  char *to = args[2]; // ime vhodne datoteke

  FILE *fIN  = fopen(from, "rb");
  FILE *fOUT = fopen(to,   "wb");

  int *buf = malloc(N*sizeof(int));

  if (fIN != NULL && fOUT != NULL) {

    // kopiranje binarne datoteko v drugo datoteko
    
    while (!feof(fIN)) {
      int stPrebranih = fread (buf, sizeof(int), N, fIN);
      if (stPrebranih > 0)
        fwrite(buf, sizeof(int), stPrebranih, fOUT);
    }

    fclose(fIN);
    fclose(fOUT);
  } else {
    printf("Napaka!\n");
  }


  return 0;
}
