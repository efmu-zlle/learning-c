#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char* first_name; 
  char* last_name; 

  printf("Enter your first name: ");
  scanf("%ms", &first_name);

  printf("Enter your last name: ");
  scanf("%ms", &last_name);

  printf("Hello %s %s!\n", first_name, last_name);

  free(first_name);
  free(last_name);
}