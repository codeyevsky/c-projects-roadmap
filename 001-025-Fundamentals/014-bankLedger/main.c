#include <stdio.h>

/**
 * Simple Bank Ledger Application
 * In-memory deposit / withdraw / balance / history with a text menu.
 * This application allows users to deposit and withdraw funds, view their current balance 
 * and see a history of transactions. All data is stored in memory and will be lost when the program exits.
 */

#define START_BALANCE     100.0
#define MAX_TRANSACTIONS  100

typedef enum {
    TX_DEPOSIT,
    TX_WITHDRAW
} TxType;

typedef struct {
    TxType type;
    double amount;
    double balanceAfter;
} Transaction;

typedef struct {
    double      balance;
    Transaction history[MAX_TRANSACTIONS];
    int         txCount;
} Account;

void accountInit(Account *acc, double startBalance);
void clearInputBuffer(void);
int  readInt(const char *prompt, int *out);
int  readAmount(const char *prompt, double *out);
void printMenu(void);
void deposit(Account *acc);
void withdraw(Account *acc);
void showBalance(const Account *acc);
void showHistory(const Account *acc);
void recordTransaction(Account *acc, TxType type, double amount);

int main(void)
{
    Account acc;
    int     option;
    int     isRunning = 1;

    accountInit(&acc, START_BALANCE);

    printf("Welcome to the Simple Bank Ledger Application!\n");

    /**
     * Main application loop
     * The loop continues until the user chooses to exit or the input stream is closed.
     * The user is presented with a menu of options to deposit, withdraw, view balance, 
     * view transaction history or exit the application.
     */
    while (isRunning)
    {
        printMenu();

        if (!readInt("Enter your choice: ", &option))
        {
            printf("\nInput stream closed. Exiting.\n");
            break;
        }

        switch (option)
        {
            case 1:
                deposit(&acc);
                break;
            case 2:
                withdraw(&acc);
                break;
            case 3:
                showBalance(&acc);
                break;
            case 4:
                showHistory(&acc);
                break;
            case 5:
                printf("\nExiting the application. Goodbye!\n");
                isRunning = 0;
                break;
            default:
                printf("Invalid option. Please choose a number between 1 and 5.\n");
                break;
        }
    }

    return 0;
}

void accountInit(Account *acc, double startBalance)
{
    acc->balance = startBalance;
    acc->txCount = 0;
}

void printMenu(void)
{
    printf("\n--- MENU ---\n"
           "1. Deposit Funds\n"
           "2. Withdraw Funds\n"
           "3. View Account Balance\n"
           "4. View Transaction History\n"
           "5. Exit\n");
}

void clearInputBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
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

int readAmount(const char *prompt, double *out)
{
    int rc;

    for (;;)
    {
        printf("%s", prompt);

        rc = scanf("%lf", out);

        if (rc == EOF)
            return 0;

        if (rc != 1)
        {
            printf("\nError! Please enter a numeric amount.\n");
            clearInputBuffer();
            continue;
        }

        clearInputBuffer();

        if (*out <= 0.0)
        {
            printf("\nAmount must be greater than zero.\n");
            continue;
        }

        return 1;
    }
}

void recordTransaction(Account *acc, TxType type, double amount)
{
    if (acc->txCount >= MAX_TRANSACTIONS)
    {
        printf("Notice: transaction log is full, this entry was not recorded.\n");
        return;
    }

    acc->history[acc->txCount].type         = type;
    acc->history[acc->txCount].amount       = amount;
    acc->history[acc->txCount].balanceAfter = acc->balance;
    acc->txCount++;
}

void deposit(Account *acc)
{
    double amount;

    if (!readAmount("Enter amount to deposit: ", &amount))
        return;

    acc->balance += amount;
    recordTransaction(acc, TX_DEPOSIT, amount);

    printf("Deposited %.2f. New balance: %.2f\n", amount, acc->balance);
}

void withdraw(Account *acc)
{
    double amount;

    if (!readAmount("Enter amount to withdraw: ", &amount))
        return;

    if (amount > acc->balance)
    {
        printf("Insufficient funds. Your balance is %.2f\n", acc->balance);
        return;
    }

    acc->balance -= amount;
    recordTransaction(acc, TX_WITHDRAW, amount);

    printf("Withdrew %.2f. New balance: %.2f\n", amount, acc->balance);
}

void showBalance(const Account *acc)
{
    printf("\nCurrent balance: %.2f\n", acc->balance);
}

/**
 * Displays the transaction history for the account.
 * If there are no transactions, a message indicating this is displayed.
 * The transaction history is displayed in a tabular format with columns for 
 * transaction number, type, amount, and balance after the transaction.
 */
void showHistory(const Account *acc)
{
    int i;

    if (acc->txCount == 0)
    {
        printf("\nNo transactions yet.\n");
        return;
    }

    printf("\n%-4s %-10s %12s %12s\n", "#", "TYPE", "AMOUNT", "BALANCE");
    for (i = 0; i < acc->txCount; i++)
    {
        printf("%-4d %-10s %12.2f %12.2f\n",
               i + 1,
               acc->history[i].type == TX_DEPOSIT ? "DEPOSIT" : "WITHDRAW",
               acc->history[i].amount,
               acc->history[i].balanceAfter);
    }
}