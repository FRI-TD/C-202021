/*  
  File : java.c
*/
#include <stdio.h>

typedef struct jheader {
  int magic;
  short minor;
  short major;
  short cpCount;
} jheader;

short swapShort(int x) {
  return ((x & 0xff) << 8) + (x >> 8);
}

int main(int argc, char *args[]) {

  jheader jh;
  FILE *f = fopen("TT.class", "r");
  fread(&jh, sizeof(jheader), 1, f);
  fclose(f);

  printf("Magic:   %X\n", jh.magic);
  printf("Minor:   %d\n", swapShort(jh.minor));
  printf("Major:   %d\n", swapShort(jh.major));
  printf("CpCount: %d\n", jh.cpCount);

  return 0;
}
