#include <stdio.h>

#define REMAINDER(a, b) ((a) % (b) == 0 ? 0 : 1)

int main(int argc, char *argv[]) {
  int numerator, denominator;

  printf("Enter a numerator: ");
  if (scanf("%d", &numerator) != 1 || numerator < 0)  {
    printf("Invalid input. Please enter a non-negative integer.\n");
    return 1; 
  }

  printf("Enter a denominator: ");
  if (scanf("%d", &denominator) != 1 || denominator < 0)  {
    printf("Invalid input. Please enter a non-negative integer.\n");
    return 1; 
  }

  if (REMAINDER(numerator, denominator) != 1) 
    printf("There is NOT a remainder!");
  else
    printf("There is a remainder!");


  for (int i = 0; i < 4; i++) {
    printf("hello, world");
  }

  return 0;
}
