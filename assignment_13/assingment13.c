#include <stdio.h>

#define M 2
#define N 3

int main(void) {
  const int games = 4;
  const int players = 5;

  int scores[4][5];

  int game_counter, player_counter;

  for (game_counter = 0; game_counter < games; game_counter++) {
    printf("Game #%d\n", (game_counter + 1));

    for (player_counter = 0; player_counter < players; player_counter++) {
      printf("Enter scoring total for Player %d: ", (player_counter + 1));

      scanf("%d", &scores[game_counter][player_counter]);
    }
  }

  int highest_total = 0;
  int player_id; 

  for (player_counter = 0; player_counter < players; player_counter++) {
    int total = 0; 
    for (game_counter = 0; game_counter < games; game_counter++)  {
      total += scores[game_counter][player_counter];
    }

    if (total > highest_total) {
      highest_total = total;
      player_id = (player_counter + 1);
    }
  }

  float ppg = (float)(highest_total / 4);
  printf("Player #%d had the highest scoring average at %.2f points per game.\n", player_id, ppg);

  return 0;
}

// tokyo:~/LearningC/ # ./assignment13                                          
// Game #1
// Enter scoring total for Player #1: 11
// Enter scoring total for Player #2: 14
// Enter scoring total for Player #3: 13
// Enter scoring total for Player #4: 18
// Enter scoring total for Player #5: 22
// Game #2
// Enter scoring total for Player #1: 22
// Enter scoring total for Player #2: 24
// Enter scoring total for Player #3: 8
// Enter scoring total for Player #4: 17
// Enter scoring total for Player #5: 11
// Game #3
// Enter scoring total for Player #1: 9
// Enter scoring total for Player #2: 21
// Enter scoring total for Player #3: 14
// Enter scoring total for Player #4: 17
// Enter scoring total for Player #5: 22
// Game #4
// Enter scoring total for Player #1: 18
// Enter scoring total for Player #2: 15
// Enter scoring total for Player #3: 17
// Enter scoring total for Player #4: 21
// Enter scoring total for Player #5: 24
// Player #5 had the highest scoring average at 19.00 points per game.