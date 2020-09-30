#include<stdio.h>

int main() {
  int mesec = 2;
  int steviloDni;

  switch (mesec) {    
    case 2:      
      steviloDni=28;      
    case 4:    
    case 6:    
    case 9:   
    case 11:      
      steviloDni=30;    
    default:      
      steviloDni=31;          
  }
  printf("Stevilo dni: %d\n", steviloDni);
}
