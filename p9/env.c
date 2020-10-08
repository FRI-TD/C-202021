/*  
  File : env.c
*/
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **args, char **env) {

  while (*env != NULL) {    
    printf("%s\n", *env);    
    env++; 
 }
 
  printf("PATH ==== %s\n", getenv("PATH"));

  return 0;
}
