#include <stdio.h>
// there are 3600 seconds in a one hour
// there are 60 seconds in one minute

#define GET_HOURS(s) ((s) / 3600)
#define GET_MINUTES(s) ((s) % 3600 / 60)
#define GET_SECONDS(s) ((s) % 60)

int main(int argc, char* argv[]) {
  int s;
  int hours, minutes, seconds;

  printf("Enter the amount of seconds: ");

  if (scanf("%d", &s) != 1 || s < 0 ) {
    printf("Invalid input. Please enter a non-negative integer.\n");
    return 1;
  }

  printf("%d seconds is equal to %d hours, %d minutes, and %d seconds.\n", s, GET_HOURS(s), GET_MINUTES(s), GET_SECONDS(s));

  return 0;
}

