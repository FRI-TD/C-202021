#include<stdio.h>

/*
  Ce uporabnik v spremenljivko ime vpise predlogo ime 
  (to je ime, ki vsebuje vec kot 4 znake), program
  ne deluje previlno - prepise vsebino spremenljivke
  starost in se kaj...
*/
int main() {
	int starost;
  char ime[5];

	printf("Vpisi starost: "); 
	scanf("%d", &starost);

	printf("Vpisi ime: "); 
	scanf("%s", ime);

	printf("Pozdravljen, %s, star si %d let\n", ime, starost);

  return 0;
}