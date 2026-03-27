#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void clearBuffer(void);


int main(void)
{
    int option; 
    char choices[2][8]; // index 0 is for user, index 1 is for computer

    // seed the number generator to make it random
    

    // repeat the main game loop
    while (1)
    {
        printf("\n1. Play\n2. Quit\nEnter Choice: ");
        scanf("%d", &option);
        clearBuffer();

        switch (option)
        {
        case 1:
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


