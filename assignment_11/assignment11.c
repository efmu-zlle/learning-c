#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int MAX_VALUE = 10;

int main(void) {
  int array[10];  
  int numScores = 0;  
  char *string;
  float average;

  do
  {
    printf("Enter a test score: ");
    scanf("%d", &array[numScores]);

    printf("Would you like to continue? Y/N: ");
    scanf("%s", string); 

    average = average + array[numScores];
    *(string) = tolower(*(string)); 
    numScores++;
  } while (strcmp(string, "y") == 0 && numScores < MAX_VALUE);

  printf("%.2f\n", average / numScores);

  return 0;
}