#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int integer;
} example;

void sum(int *a) {
  printf("%p\n", a);

  int temp = 15;
  a = &temp;
  printf("%p\n", a);
  printf("%d\n", *a);
}

int main(void) {
  // example* ptr;
  // example test;
 
  // int x = 5, y = 6, z = 7;
  // ptr = &test;

  // test.integer = x;
  // printf("%d\n", test.integer);

  // (*ptr).integer = y;
  // printf("%d\npointer: %d\n", (*ptr).integer, sizeof(ptr));

  // ptr->integer = z;
  // printf("%d\n", ptr->integer);

  int *ptr_num = NULL;
  sum(ptr_num);
  printf("%d", *ptr_num);

  return 0;
}

// Create a simple structure of your choice. Mine will have a single member, an int called integer. Do not create an instances of the struct yet. Declare a pointer variable that points to your struct. This pointer doesn't actually point to anything yet because there are no instances of the first struct. Create an instance of the struct. Now initialize your pointer to point to the struct instance.

// Finally, assign values to the integer member of your original struct in three ways:

// assign a value by using standard dot-notation for your instance and then print the value
// assign a value by using standard dot-notation for the pointer initialized to the instance and then print the value
// assign a value by using the -> indirect membership operator between the pointer name and the structure member and then print the value

// tokyo:~/LearningC/ # ./assignment23                                        
// 5
// 6
// 7 