#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX 2

void clearBuffer(void);
void getUserChoice(char *storeBuffer);
void getComputerChoice(char *storeBuffer);
void decideWinner(char *storeBuffer);

int main(void)
{
    int option; 
    char choices[MAX]; // index 0 is for user, index 1 is for computer

    // seed the number generator to make it random
    srand(time(NULL));

    // repeat the main game loop
    while (1)
    {
        printf("\n1. Play\n2. Quit\nEnter Choice: ");
        scanf("%d", &option);
        clearBuffer();

        switch (option)
        {
            case 1:
                getUserChoice(choices);
                getComputerChoice(choices);
                decideWinner(choices);
                break;
            case 2:
                return 0;
            default:
                printf("\nNot a valid choice.\n");
                continue;
        }

    }

    return 0;
}


void clearBuffer(void)
{
    int ch = getchar();

    while ((ch != '\n') && (ch != EOF))
    {
        ch = getchar();
    }
}

void getUserChoice(char *storeBuffer)
{
    int choice; 

    printf("\n1) Rock\n2) Paper\n3) Scissor\nEnter your choice: ");
    scanf("%d", &choice);
    clearBuffer();

    if (choice == 1)
    {
        storeBuffer[0] = 'R';
    }
    else if (choice == 2)
    {
        storeBuffer[0] = 'P';
    }
    else if (choice == 3)
    {
        storeBuffer[0] = 'S';
    }
    else
    {
        printf("\nNot a valid choice.\n");
        exit(1); // end the program
    }
}


void getComputerChoice(char *storeBuffer)
{
    int choice = (rand() % 3) + 1;

    if (choice == 1)
    {
        storeBuffer[1] = 'R';
    }
    else if (choice == 2)
    {
        storeBuffer[1] = 'P';
    }
    else if (choice == 3)
    {
        storeBuffer[1] = 'S';
    }
}


void decideWinner(char *storeBuffer)
{
    // check winner
    /*
        80 = P: paper
        82 = R: rock
        83 = S: scissors
    */

    if ((storeBuffer[0] == 82) && (storeBuffer[1] == 83))
    {
        printf("\nYou Win!\n");
    }
    else if ((storeBuffer[0] == 80) && (storeBuffer[1] == 82))
    {
        printf("\nYou Win!\n");
    }
    else if ((storeBuffer[0] == 83) && (storeBuffer[1] == 80))
    {
        printf("\nYou Win!\n");
    }
    else
    {
        printf("\nThe Computer Wins!\n");
    }
}
