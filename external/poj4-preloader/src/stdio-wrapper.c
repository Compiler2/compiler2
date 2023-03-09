#include <time.h>
#include <stdlib.h>
// FIXME: For some reason, if the stdio.h is not included, original scanf is called.
// Assumption: Included function signature helps the linker to recognize
// our implemenration of the scanf. 
#include <stdio.h>  

#if 1

int printf(const char *restrict text, ...) {
  return 0;
}

#endif


int scanf(const char *restrict text, ...) {
  // FIXME: Find a smart way to set the seed only once (e.g. lazy when the scanf is called for the first time).
  srand(time(NULL));  
  
  // Generate and return a pseudo-random number from the interval [1, 100]
  int num = rand() % 101 + 1; 
  // printf("Random number: %d\n", num);
  return num;
}
