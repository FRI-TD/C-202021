/*
  File : strr.c
*/
#include <stdio.h>
#include <string.h>

int main() { //     3    6      9
  char str[] = ":::abc:::def:::1239";
  char delims[] = ":";

  char *result;
  int i=0;
  result = strtok(str, delims);
  while (result != NULL) {
    char *back = result;back--;
    while (back >=str && *back == delims[0]) {back--; i++;}

    printf("%d - %s\n", i++, result);
    result = strtok(NULL, delims);
  }
}