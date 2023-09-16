// Program to find the min of two values using macros

#include <stdio.h>

#define MIN(x, y) x > y ? y : x

int main(void) {

  int x = 4, y = 8;
  printf ("The minimum of %d and %d is %d\n", x, y, MIN (x, y));
  
  return 0;
}