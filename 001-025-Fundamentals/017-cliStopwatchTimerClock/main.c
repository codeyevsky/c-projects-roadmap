#include <stdio.h>
#include <time.h>
#include <signal.h>

int readInt(const char *prompt, int *out);
void clearInputBuffer(void);

int main()
{
    int option;
    int isRunning = 1;

    while (isRunning)
    {  

        printf("Welcome to the Stopwatch, Timer and Clock!\n"
               "For Stopwatch, press '1'\n"
               "For Timer, press '2'\n"
               "For Clock, press '3'\n"
               "To exit, press '4'\n"
               "Please enter your choice: "
              );

        if (!readInt("Enter your choice: ", &option))
        {
            printf("\nInput stream closed. Exiting.\n");
            return 0;
        }

        switch (option)
        {
        case 1:
            // Stopwatch code here
            break;
        case 2:
            // Timer code here
            break;
        case 3:
            // Clock code here
            break;
        default:
            printf("\nInvalid option. Please try again.\n");
            break;
        case 4:
            isRunning = 0;
            break;
        }
    }
}

int readInt(const char *prompt, int *out)
{
    int rc;

    /**
     * Input validation loop for reading an integer
     * The loop continues until a valid integer is entered or the input stream is closed.
     */
    for (;;)
    {
        printf("%s", prompt);

        rc = scanf("%d", out);

        if (rc == EOF)
            return 0;

        if (rc == 1)
        {
            clearInputBuffer();
            return 1;
        }

        printf("\nError! Please enter a whole integer number.\n");
        clearInputBuffer();
    }
}

void clearInputBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}