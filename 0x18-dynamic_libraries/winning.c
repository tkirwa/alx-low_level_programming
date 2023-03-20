#include <stdlib.h>
#include <stdio.h>

void srand(unsigned int seed);
int rand(void);

void init(void) __attribute__((constructor));

void init(void) {
  srand(1);
}

int rand(void) {
  // Return the winning numbers instead of random ones
  return 9;
}
