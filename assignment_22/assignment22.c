#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int points;
  int games;
} stats; 

int main(void) {
  stats player[5]; // 40

  for (int i = 0, n = sizeof(player) / sizeof(stats); i < n; i++) {
    printf("Enter Player %d's point total: ", (i + 1));
    scanf("%d", &player[i].points);

    printf("Enter Player %d's game total: ", (i + 1));
    scanf("%d", &player[i].games);
  }

  for (int i = 0, n = sizeof(player) / sizeof(stats); i < n; i++) {
    float ppg = (float)player[i].points / player[i].games;
    printf("Player %d's scoring average was %.2f ppg.\n", (i + 1), ppg);
  }

  
  return 0;
}

