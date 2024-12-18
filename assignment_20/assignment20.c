#include <stdio.h>

// Create/define a structure (struct) outside of main() that includes an int, char, and float member. Inside of main(), declare values for those struct members and then print their values to the terminal.

typedef struct {
  int integer;
  char character;
  float floatie;
} example;

int main(void) {
  example ex;
  ex.integer = 16;
  ex.character = 'e';
  ex.floatie = 2.5f;

  printf("%d\n%c\n%.2f\n", ex.integer, ex.character, ex.floatie);

  return 0; //Exit sucessfully
}

// output 
// tokyo:~/LearningC/ # ./assignment20                                         
// This is the int: 50, this is the char: W, this is the float: 3.14