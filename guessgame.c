#include <stdio.h>

int main() {
    int secretNumber = 42;
    int guess, attempts = 0;

    printf("Welcome to the Guessing Game!\n");
    printf("Try to guess the secret number between 1 and 100.\n\n");

    do {
        // Get user input
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Increment the attempts
        attempts++;

        // Provide feedback
        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

    } while (guess != secretNumber);

    return 0;
}