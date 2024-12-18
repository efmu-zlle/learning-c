#include <stdio.h>

int main(int argc, char *argv[]) {
  int array[10];

  printf("The array has %d elements.\n", sizeof(array) / sizeof(int));

  return 0;
}