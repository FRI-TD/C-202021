/*  
  File : asm.c

  Primer vkljucevanja zbirne kode v C program
*/
#include <stdio.h>

int sestej(int x, int y) {
  int rez;
  asm(".intel_syntax noprefix\n"
      "mov eax, ebx          \n"
      "add eax, ecx          \n"
  :"=a"(rez)        // output
  :"b"(x), "c"(y)   // input
  :   // clobbered registers
  );
  return rez;
}

int main(int argc, char *args[]) {
  int a=5; int b=6;
  printf("%d + %d = %d\n", a, b, sestej(a,b));

  return 0;
}
