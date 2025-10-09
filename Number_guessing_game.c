/*
Name : Kelvin Maina Mucheru 
Reg : CT101/G/264415/25
Description  a guessing number game


*/
#include <stdio.h>


int main() {
    int secretNumber, guess;

    srand(time(0));

    
    secretNumber = (rand() % 20) + 1;

    printf("Number Guessing Game!\n");
    printf("I have selected a number between 1 and 20.\n");
    printf("guess what it is?\n");

    
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number!\n");
        }
    } while (guess != secretNumber);

    return 0;
}