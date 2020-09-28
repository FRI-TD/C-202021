#include<stdio.h>

/*
 To je daljsi komentar.
 C ne pozna dokumentacijskih komentarjev.
*/
int main() {
    int n=7;  // stevilo
    int a=1;  // sp. meja intervala
    int b=10; // zg. meja intervala

    int i;
    for(i=a; i <= b; i++) {
        printf("%02d * %d = %2d\n", i, n, i*n);
    }

    double pi=3.14159265358;
    int    stMest=1;
    printf("pi=%.*f\n", stMest, pi);
}