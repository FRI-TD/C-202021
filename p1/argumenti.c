#include<stdio.h>

// argc ... stevilo argumentov
// args ... tabela argumentov
int main(int argc, char* args[]) {
   printf("Ime programa: %s\n", args[0]);

   printf("Stevilo argumentov: %d\n", argc);

   // od C99 naprej lahko "int" pisemo v zanki
   for(int i=1; i<argc; i++) {
       printf("Argument %d: %s\n", i, args[i]);
   }

  return 0;
}