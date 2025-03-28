#include <stdio.h>
#include <stdbool.h>

#define TB_MM_NEW 1
#define TB_MM_SHOWONE 2
#define TB_MM_SHOWDATE 3
#define TB_MM_SHOWDATERANGE 4
#define TB_MM_EDIT 5
#define TB_MM_DELETE 6
#define TB_MM_EXIT 0

int getProgramMode();
void printMainMenu();
bool runMainMenu();


int main(void)
{
    bool running = true;

    while (running)
    {
        running = runMainMenu();
    }

    return 0;
}

bool runMainMenu()
{
    bool result = true;

    int mode = getProgramMode();

    switch (mode)
    {
        case TB_MM_NEW:
            break;

        case TB_MM_SHOWONE:
            break;

        case TB_MM_SHOWDATE:
            break;

        case TB_MM_SHOWDATERANGE:
            break;

        case TB_MM_EDIT:
            break;

        case TB_MM_DELETE:
            break;

        case TB_MM_EXIT:
            result = false;
            break;
        
        default:
            break;
    }

    return result;
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