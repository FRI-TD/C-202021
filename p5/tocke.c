#include <stdio.h>

struct tocka {
  int x;
  int y;
};


// zamenja vrednosti x in y
void zrcali(struct tocka t) {
  printf("..PREJ..  t=(%d,%d)\n", t.x, t.y);
  int tmp = t.x;
  t.x   = t.y;
  t.y   = tmp;

  printf("..POTEM.. t=(%d,%d)\n", t.x, t.y);
}

int main() {
  
  struct tocka t1;
  t1.x=5; t1.y=3;   // (5,3)

  struct tocka t2 = {1,2};  // (1,2)

  struct tocka t3 = {.y=7, .x=2};  // (2,7)

  struct tocka t4 = {.y=13};       // (?, 13)

  printf("t1=(%d,%d)\n", t1.x, t1.y);
  printf("t2=(%d,%d)\n", t2.x, t2.y);
  printf("t3=(%d,%d)\n", t3.x, t3.y);
  printf("t4=(%d,%d)\n", t4.x, t4.y);

  zrcali(t1);
  printf("t1=(%d,%d)\n", t1.x, t1.y);

  return 0;
}