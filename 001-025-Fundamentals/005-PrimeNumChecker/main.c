#include <stdio.h>

/**
 * Prime Number Checker
 * This program allows the user to check whether a single number is prime
 * or to find all prime numbers within a specified range.
 * The user can choose between checking a single number or a range of numbers, 
 * and the program will display the results accordingly.
 */

int validInt(int *number);
int isPrime(int number);

int main(void)
{
    int choice;

    printf("Prime Number Checker\n");
    printf("For checking a range press 1.\n");
    printf("For checking a single number press 2.\n");
    printf("Enter your choice: ");

    // Read and validate the user's menu choice.
    if (!validInt(&choice))
        return 1;

    if (choice == 1)
    {
        int rangeStart;
        int rangeEnd;

        printf("Enter the start of the range: ");
        if (!validInt(&rangeStart))
            return 1;

        printf("Enter the end of the range: ");
        if (!validInt(&rangeEnd))
            return 1;

        /*
            The start of the range must not be greater than the end.
        */
        if (rangeStart > rangeEnd)
        {
            printf("Error: Start of the range cannot be greater than the end.\n");
            return 1;
        }

        /*
            Check every number in the given range.
        */
        printf("Prime numbers between %d and %d:\n", rangeStart, rangeEnd);
        for (int i = rangeStart; i <= rangeEnd; i++)
        {
            if (isPrime(i))
            {
                printf("%d ", i);
            }
        }

        printf("\n");
    }
    else if (choice == 2)
    {
        int number;

        printf("Enter a number to check: ");
        if (!validInt(&number))
            return 1;

        if (isPrime(number))
        {
            printf("%d is a prime number.\n", number);
        }
        else
        {
            printf("%d is not a prime number.\n", number);
        }
    }
    else
    {
        printf("Invalid choice! Please enter either 1 or 2.\n");
    }

    return 0;
}

/*
    Reads an integer safely.
    Returns 1 if the input is valid, otherwise returns 0.
*/
int validInt(int *number)
{
    if (scanf("%d", number) != 1)
    {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 0;
    }

    return 1;
}

/*
    Checks whether a number is prime.
    Returns 1 if prime, otherwise returns 0.
*/
int isPrime(int number)
{
    if (number <= 1)
        return 0;

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return 0;
    }

    return 1;
}