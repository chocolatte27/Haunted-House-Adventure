#include <stdio.h>
int main() {
    int choice1, choice2, choice3;
    printf("HAUNTED HOUSE ADVENTURE\n");
    printf("You stand in front of a dark, creepy house...\n");
    printf("\nWhat do you do?\n");
    printf("1. Enter the house\n");
    printf("2. Run away\n");
    printf("Enter choice: ");
    scanf("%d", &choice1);
    if (choice1 == 1) {
        printf("\nYou step inside... the door slams shut behind you\n");
        printf("\nWhere do you go?\n");
        printf("1. Go upstairs\n");
        printf("2. Enter basement\n");
        printf("Enter choice: ");
        scanf("%d", &choice2);
        if (choice2 == 1) {
            printf("\nUpstairs, you see a glowing room...\n");
            printf("\nWhat now?\n");
            printf("1. Open the door\n");
            printf("2. Run back\n");
            printf("Enter choice: ");
            scanf("%d", &choice3);
            if (choice3 == 1) {
                printf("\nA ghost appears... but gives you treasure!\n");
                printf("YOU WIN!\n");
            } else {
                printf("\nYou trip while running... the ghost catches you\n");
                printf("GAME OVER!\n");
            }
        }
        else if (choice2 == 2) {
            printf("\nThe basement is dark and silent...\n");
            printf("\nWhat now?\n");
            printf("1. Turn on light\n");
            printf("2. Walk in darkness\n");
            printf("Enter choice: ");
            scanf("%d", &choice3);
            if (choice3 == 1) {
                printf("\nLights reveal zombies!\n");
                printf("GAME OVER!\n");
            } else {
                printf("\nYou quietly escape through a secret door!\n");
                printf("YOU WIN!\n");
            }
        } else {
            printf("Invalid choice!\n");
        }
    }
    else if (choice1 == 2) {
        printf("\nYou run away safely...\n");
        printf("But you missed the adventure!\n");
    } else {
        printf("Invalid choice!\n");
    }
    return 0;
}
