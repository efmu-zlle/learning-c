#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// tokyo:~/LearningC/ # ./assignment12                                  
// How many times would you like to flip the coin? 5000
// After flipping the coin 5000 times, the results were
// 2536 heads
// 2464 tails

int main(void) {
  int heads = 0, tails = 0, count;
  int lower = 1, upper = 2;
  srand(time(0));

  printf("How many times would you like to flip the coin? ");
  scanf("%d", &count);

  int result;
  for (int i = 0; i < count; i++) {
    result = (rand() % (upper - lower + 1)) + lower;

    if (result == 1) {
      heads++;
    } else if (result == 2) {
      tails++;
    }
  }

  printf("After flipping the coint %d times, the results were\n%d heads\n%d tails\n", count, heads, tails);

  return 0;
}

// http servers and networking relate to memory computer
// programming is about storing data in form of zeros and ones into the memory's computer
// a web browser is just an applicaction made where you have definelty stored data in the memory's computer in order to create a window
// inside of it you can also run code,
// what is bothering me is that how run code that to create an http server a conecte it to the webbrowser
