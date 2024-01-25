#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
   
    srand(time(NULL));

    char choices[][10] = {"Rock", "Paper", "Scissors"};

    int userChoice;
    printf("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
    scanf("%d", &userChoice);

    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice. Please choose 0 for Rock, 1 for Paper, or 2 for Scissors.\n");
        return 1; 
    }

    int computerChoice = rand() % 3;

    printf("Your choice: %s\n", choices[userChoice]);
    printf("Computer's choice: %s\n", choices[computerChoice]);

    if (userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}