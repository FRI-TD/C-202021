/*  
  File : assert.c
*/
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdint.h>


int main(int argc, char *args[]) {
  int a=5;

#ifdef DEBUG
  assert(a==4);
#endif

  return 0;
}
