/*  
  File : osebe.c
*/
#pragma pack(1)

#include <stdio.h>
#include <stdlib.h>

typedef struct oseba {
  int id;    // 4
  char *ime; // 8
} oseba;


int main(int argc, char *args[]) {
  int i=12;
  int *p;
  p=&i;
  *p=15;

  printf("%lu\n", sizeof(oseba));
  printf("%lu\n", sizeof(int));

  oseba *o;
  o = malloc(sizeof(oseba));
  o->id=5;
  // o->ime = "MickakovacevaPilaNcPlacala";    // literal se shrani v TEXT (in ne v DATA / STACK / HEAP)

  o->ime=malloc(100);
  strcpy(o->ime,  "MickakovacevaPolaNcPlacala");
  o->ime[0] = 'm';

  printf("%s, %d\n", o->ime, o->id);

  free(o->ime);
  free(o);

  return 0;
}
