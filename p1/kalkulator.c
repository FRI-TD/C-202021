#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* args[]) {
    int x=atoi(args[1]);
    int y=atoi(args[2]);

    int z=x+y;

    printf("%d + %d = %d\n", x, y, z);

    return 0;
}