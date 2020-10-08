/*  
  File : zaslon.c
*/
#include <stdio.h>

#define H 5
#define W 5

int main(int argc, char **args) {

  char *blok = (char*) malloc(H*W*sizeof(char));
  char **zaslon = (char**) malloc(H*sizeof(char *));
  for (int i = 0; i < H; i++)
    zaslon[i] = blok + i*W*sizeof(char);
  
  for (int i = 0; i < H; i++)
    for (int j = 0; j < W; j++)
      zaslon[i][j] = ' ';      

  for (int i = 0; i < H; i++)
    for (int j = 0; j < W; j++)
      zaslon[i][j] = 'A'+i+j;      

  

  return 0;
}
