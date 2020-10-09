/*  
  File : mat.c
*/
#include <stdio.h>
#include <math.h>

enum KAJ{VSA, DEL};

// kaj ... 0 (vsa stevila), kaj ... 1 (del stevil)
void izpisi(enum KAJ kaj) {
  if (kaj == VSA) {
    printf("VSA\n");
  } else if (kaj == DEL) {
    printf("DEL\n");
  }
}

enum DNEVI{NE=1, PO=4, To=3, SR=6, CE=9, PE=5, SO=42};

enum D{YES=1, NO, MOGOCE};

int main(int argc, char *args[]) {
  double pi = M_PI;

  printf("%.15f\n", pi);

  izpisi(DEL);

  printf("%d %d %d\n", NE, SR, SO);

  printf("%d %d %d\n", YES, NO, MOGOCE);

  return 0;
}
