// program izpiše vsebino datoteke na zaslon

#include<stdio.h>

int main(int argc, char *args[]) {
  FILE *f;

  char buff[10];

  if (argc > 1) {
    f = fopen(args[1], "r");
    if (f != NULL) {
      
      while(!feof(f)) {        
        if (fgets(buff, 10, f) != NULL)
          printf("%s",  buff);
      }

      fclose(f);
    } else {
      printf("datoteke '%s' ne morem odpreti\n", args[1]);
    }
  } else {
    printf("Napacno stevilo argumentov!\n");
  }
}