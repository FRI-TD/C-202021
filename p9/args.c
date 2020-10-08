/*  
  File : args.c
*/
#include <stdio.h>

int main(int argc, char **args) {

  printf("%s\n", args[1]);

  char *p = args[0];
  for (int i = 0; i < 200; i++)
    printf("%c", *(p+i)=='\0' ? '\n' : *(p+i));

  return 0;
}
