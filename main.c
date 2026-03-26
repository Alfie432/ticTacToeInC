#include <stdio.h>


void clearBuffer(void);


int main(void)
{
    int choice; 

    // repeat the main game loop
    while (1)
    {
        printf("\n1. Play\n2. Quit\nEnter Choice: ");
        scanf("%d", &choice);
        clearBuffer();

        switch (choice)
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