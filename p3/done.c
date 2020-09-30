#include <stdio.h>
#include <time.h>

// copyright (stackoverflow)
void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds 
    int milli_seconds = 1000 * 1000 * number_of_seconds; 
  
    // Storing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds); 
} 


// izpisuje pikice (vsako sekundo eno), nato se vrne
// na zacetek vrstice in izpise "Done."
int main() {
  for(int i=0; i<10; i++) {
    printf(".");
    fflush(stdout);
    delay(1);
  }
  
  printf("\rDone.          \n");
}