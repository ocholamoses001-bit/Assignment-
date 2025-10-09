/*
Name: Moses Ouma 
Reg No : PA106/G/28795/25
Date: 8th October 2025
Description : Program to display number guessing game
*/

#include <stdio.h>

int main() {
    int secretNumber = (rand() % 20) + 1;
    int guess;
    int attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a secret number between 1 and 20. Can you guess it?\n");

    while (1) { 
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! The secret number was %d. You guessed it in %d attempts.\n", secretNumber, attempts);
            break; 
        }
    }

    return 0;
}    