#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>  

int main() {
    int playerRoll, computerRoll;
    int playerScore = 0, computerScore = 0;
    char userInput;

    srand(time(NULL));

    printf("=== Dice Battle Game ===\n");

    for (int round = 1; round <= 3; round++) {
        printf("\n-- Round %d --\n", round);

        printf("Press 'd' to roll the dice!\n");
        while(1) {
            userInput = getch();  

            if(userInput == 'd' || userInput == 'D') {
                break; 
            }
        }

        playerRoll = rand() % 6 + 1;
        computerRoll = rand() % 6 + 1;

        printf("You rolled: %d\n", playerRoll);
        printf("Computer rolled: %d\n", computerRoll);

        if (playerRoll > computerRoll) {
            printf("You win this round!\n");
            playerScore++;
        } else if (playerRoll < computerRoll) {
            printf("Computer wins this round!\n");
            computerScore++;
        } else {
            printf("It's a tie this round!\n");
        }
    }

    printf("\n=== Final Score ===\n");
    printf("You: %d | Computer: %d\n", playerScore, computerScore);

    if (playerScore > computerScore) {
        printf("You win the game!\n");
    } else if (playerScore < computerScore) {
        printf("Computer wins the game!\n");
    } else {
        printf("It's a draw!\n");
    }

    printf("Press any key to exit...\n");
    getch();

    return 0;
}
