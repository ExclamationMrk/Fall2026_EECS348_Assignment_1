/*
  name: EECS 348 Assignment 1 - Gemini
  purpose: C program that picks a number between 1 and 10
  inputs: integers from user
  outputs: prints to console whether the user guess the secret number or not
  within 3 attempts
  collaborators: Dylan Miller, Gemini
  other sources: none
  author: Dylan Miller
  creation date: 09/02/2026
  revision date: 09/02/2026
  revisions:
    1.0 - Added the prologue comment. that's it, since I thought that even
    though I am not using this program, it should have one. I am not commenting
    the lines though, since I am not using them.
*/

#include <stdio.h>

int main(void) {
  // Secret number fixed between 1 and 10
  const int secret_number = 7;
  const int max_attempts = 3;
  int guess;
  int won = 0;

  printf("Guess a number between 1 and 10.\n");

  // Loop to allow the user to guess up to 3 times
  for (int attempt = 1; attempt <= max_attempts; attempt++) {
    printf("Attempt %d/%d. Enter your guess: ", attempt, max_attempts);
    scanf("%d", &guess);

    // Check guess against the secret number
    if (guess == secret_number) {
      won = 1;
      break; // Stop the loop immediately if the user guesses correctly
    } else if (guess < secret_number) {
      printf("Too low! Try again.\n");
    } else {
      printf("Too high! Try again.\n");
    }
  }

  // Print final win or lose message
  if (won) {
    printf("Correct! You win!\n");
  } else {
    printf(
        "Sorry, you ran out of attempts. You lose! The secret number was %d.\n",
        secret_number);
  }

  return 0;
}
