#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *string; 
  string = malloc(10 * sizeof(string));

  if (string == NULL) {
    printf("Memory could not be allocated.\n");
    return 1;
  } else {
    printf("Memory was succesfully allocated.\n");
    free(string);
    return 0;
  }
}

// Initialize a char pointer variable. Use the malloc() function to allocate memory for a char array by assigning the result of malloc() to your pointer. Your program should check that the memory was indeed allocated and if not, print an error message and exit with code 1. Make sure your allocation size is a multiple of the char data type by using the sizeof() function so the code is portable. Google best practices for using malloc(). Don't forget to use free() to free the memory space before exiting the program if successful.3