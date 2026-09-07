/*
  name: EECS 348 Assignment 1 - Claude
  purpose: C program that picks a number between 1 and 10
  inputs: integers from user
  outputs: prints to console whether the user guess the secret number or not
  within 3 attempts
  collaborators: Dylan Miller, Claude
  other sources: none
  author: Dylan Miller
  creation date: 09/02/2026
  revision date: 09/02/2026
  revisions:
    1.0 - Added the prologue comment.
    1.1 - adding comments to all lines
    2.0 - adding input handling for non-integers
*/

// initial header files
#include <stdio.h>

// main function where all the magic happens. If unstated, the code was written
// by Claude
int main(void) {

  /*
    all variables get initialized here
    made SECRET, the number to guess, and MAX_ATTEMPTS, the maximum number of
    attempts, constants because they should never change
  */
  const int SECRET = 7;
  const int MAX_ATTEMPTS = 3;

  // guess has no value at start
  int guess;

  // attempts starts at 0
  int attempts = 0;

  // prints a welcome the user to the game, and explain the singular rule
  printf("Guess a number between 1 and 10 in %d attempts.\n", MAX_ATTEMPTS);

  // loop until the user either guesses the num or loses
  while (attempts < MAX_ATTEMPTS) {
    // increment attempts
    attempts++;

    // prints the attempts number and the user can guess
    printf("Attempt %d/%d. Enter your guess: ", attempts, MAX_ATTEMPTS);

    // scans the user's guess
    scanf("%d", &guess);

    // input handling code, written by me
    // checks for guess validity, which works with strings and ints because of C strict typing.
    if (guess < 1 || guess > 10) {
      // prints to tell user to enter a valid integer
      printf("Please only enter an integer between 1 and 10! exiting...\n");

      // decided to have the program return 1 so that if this were used, it's obvious something happened
      return 1;
    } // closing bracket for type checking

    // checks if the guess is correct
    if (guess == SECRET) {
      // prints out to console the win, then returns and ends the program
      printf("Correct! You win!\n");

      // return
      return 0;
    } // closing bracket for correct guess

    // if the guess is too low
    else if (guess < SECRET) {
      // print too low
      printf("Too low!");

      // new logic so that Try again only prints if the attempts are less than the max. I wrote this block
      if (attempts < MAX_ATTEMPTS) {
        printf(" Try again.");
      }

      // formatting new line
      printf("\n");
    } // closing brackets for lowball guess

    // if the guess is too high (already checked for equal or lesser guess)
    else {
      // print too high
      printf("Too high!");

      // new logic so that Try again only prints if the attempts are less than the max. I wrote this block
      if (attempts < MAX_ATTEMPTS) {
        printf(" Try again.");
      }

      // formatting new line
      printf("\n");
    } // closing bracket for highball guess
  } // closing bracket for while loop

  // prints out to console the loss if the guess == SECRET logic never fired.
  printf("Sorry, you lose! The number was %d.\n", SECRET);
  
  // return
  return 0;
} // closing for main
