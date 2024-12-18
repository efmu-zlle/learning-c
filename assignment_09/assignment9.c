#include <stdio.h>

// tokyo:~/LearningC/ # ./assignment9                                   
// Usage: ./assignment9 Firstname Lastname#
// tokyo:~/LearningC/ # ./assignment9 Jimmy Smith                      
// Hello, Jimmy Smith#
// tokyo:~/LearningC/ # ./assignment9 Jimmy Paul Smith                  
// Usage: ./assignment9 Firstname Lastname#

int main(int argc, char *argv[]) {
  if (argc != 3)  
    printf("Usage: ./assigment9 Firstname Lastname");
  else  
    printf("Hello, %s %s", argv[1], argv[2]);
}