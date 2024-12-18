#include <stdio.h>

int main(void) {
  int arr[3][2];
  int *ptr_arr = &arr[0][0];

  printf("arr: %p pointer_arr: %p", (void*)arr, ptr_arr); // we get a memory adddress when we print("%p", (void*)arr) because an array is pointer to the first block of memory of the array
  return 0;
}


// After function D, ptr is not set to FGHIJ after D exits. This is because FGHIJ is stored on the stack within function D as a local array and will be deallocated once the function exits. It is local to only function D. So, after function D exits, ptr points to deallocated memory which would lead to an error if accessed. In contrast, in function C, the pointer cp is stored on the stack and points to the string ABCDE which is stored in the read-only data segment and can be accessed after the function exits.
