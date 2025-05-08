#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    char *options[] = {"Rock", "Paper", "Scissors"};

    srand(time(NULL));

    printf("Choose: Rock(1), Paper(2), Scissors(3): ");
    scanf("%d", &userChoice);

    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please enter 1, 2, or 3.\n");
        return 1;
    }

    userChoice -= 1;
    computerChoice = rand() % 3;

    printf("You chose: %s\n", options[userChoice]);
    printf("Computer chose: %s\n", options[computerChoice]);

    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}