#include <stdio.h>
#include <unistd.h>

#define START_BALANCE 100.0

int validateOption(int option);
void clearInputBuffer();
void createAccount();

float balance = START_BALANCE;
int isAccountCreated = 0;

int main() 
{
    int option;
    int isRunning = 1;
    
    while (isRunning) 
    {
        printf("\nWelcome to the Simple Bank Ledger Application!\n"
               "Please select an option from the menu below:\n"
               "1. Deposit Funds\n"
               "2. Withdraw Funds\n"
               "3. View Account Balance\n"
               "4. Exit\n"
               "Enter your choice: ");

        while (scanf("%d", &option) != 1) 
        {
            printf("Error! Please enter a whole integer number, not a float or characters: ");
            clearInputBuffer();
        }
        
        if (validateOption(option)) 
        {
            switch (option) 
            {
                case 1:
                    printf("You selected: Deposit Funds\n");
                    sleep(1);
                    break;
                case 2:
                    printf("You selected: Withdraw Funds\n");
                    sleep(1);
                    break;
                case 3:
                    printf("You selected: View Account Balance\n");
                    sleep(1);
                    break;
                case 4:
                    printf("Exiting the application. Goodbye!\n");
                    sleep(1);
                    isRunning = 0;
                    break;
            }
        }
    }

    return 0;
}

int validateOption(int option) 
{
    if (option < 1 || option > 4) 
    {
        printf("Invalid option selected. Please choose a valid option from the menu.\n");
        return 0; 
    }
    return 1; 
}

void clearInputBuffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

