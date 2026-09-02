#include <stdio.h>

int main(void) {
  int secret = 7;
  int guess;
  int attempts = 0;

  printf("Guess a number between 1 and 10.\n");

  while (attempts < 3) {
    attempts++;
    printf("Attempt %d/3. Enter your guess: ", attempts);
    scanf("%d", &guess);

    if (guess == secret) {
      printf("Correct! You win!\n");
      return 0;
    } else if (guess < secret) {
      printf("Too low! Try again.\n");
    } else {
      printf("Too high! Try again.\n");
    }
  }

  printf("Sorry, you lose! The number was %d.\n", secret);
  return 0;
}
