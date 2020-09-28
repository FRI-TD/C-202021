#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char* args[]) {
    srand(time(NULL));
    int i=rand();
    // arc4random();

    printf("%d\n", i);

    return 0;
}