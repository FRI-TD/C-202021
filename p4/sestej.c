#include <stdio.h>
          
//   01101010
//  +01110011
//------------
//   11011101 
// sestevanje s pomocjo bitnih operatorjev
int sestej(int a, int b) {
  while (b != 0) {
    int prenos = a & b;
    a = a ^ b;
    b = prenos << 1;
  }
  return a;
}

int main() {
  int a=5;
  int b=7;

  int c = sestej(a,b);

  printf("%d + %d = %d\n", a, b, c);

}