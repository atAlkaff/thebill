#include <stdio.h>

int getProgramMode();
void printMainMenu();


int main(void)
{
    int mode = getProgramMode();

    return 0;
}

int getProgramMode()
{
    printMainMenu();

    int mode;
    scanf("%d", &mode);

    return mode;
}

void printMainMenu()
{
    printf("\n\n\t\tTHE BILL\n\n");

    printf("  [1] Record a transaction\n");
    printf("  [2] Print a transaction record\n");
    printf("  [3] Show transactions for one date\n");
    printf("  [4] Show transactions between two dates\n");
    printf("  [5] Edit a transaction record\n");
    printf("  [6] Delete a transaction record\n");
    printf("  [0] Exit program\n");

    printf("\n    OPTION: ");
}