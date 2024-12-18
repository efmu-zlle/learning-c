#include <stdio.h>

int main(void) {
  int number = 26;
  int *ptr_number = &number;

  printf("%p", ptr_number);

  return 0;
}