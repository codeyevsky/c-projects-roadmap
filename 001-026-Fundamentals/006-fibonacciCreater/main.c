#include <stdio.h>
#include <limits.h>

int validateInput(int *num);

int main(void)
{
    int firstNum;
    int secondNum;
    int nextNum;
    int maxNum;

    /*
        Prompt the user for the first number, second number,
        and maximum number of the Fibonacci sequence.
    */
    printf("Enter the first number of the Fibonacci sequence: ");
    if (!validateInput(&firstNum))
        return 1;

    printf("Enter the second number of the Fibonacci sequence: ");
    if (!validateInput(&secondNum))
        return 1;

    printf("Enter the maximum number for the Fibonacci sequence: ");
    if (!validateInput(&maxNum))
        return 1;

    if (firstNum < 0 || secondNum < 0 || maxNum < 0)
    {
        printf("Error: Negative numbers are not allowed.\n");
        return 1;
    }

    if (firstNum > maxNum || secondNum > maxNum)
    {
        printf("Error: Starting numbers must not be greater than the maximum value.\n");
        return 1;
    }

    /* Print the first two numbers of the sequence. */
    printf("%d\n", firstNum);

    if (secondNum != firstNum)
        printf("%d\n", secondNum);

    while (1)
    {
        /* 
        Check for integer overflow before addition.
        (Int overflow occurs if the sum of two positive integers exceeds INT_MAX. (2,147,483,647))
        */
        if (firstNum > INT_MAX - secondNum)
        {
            printf("Error: Integer overflow occurred.\n");
            break;
        }

        nextNum = firstNum + secondNum;

        /* Stop if the next number exceeds the maximum value. */
        if (nextNum > maxNum)
            break;

        printf("%d\n", nextNum);

        /* Move to the next Fibonacci numbers. */
        firstNum = secondNum;
        secondNum = nextNum;
    }

    return 0;
}

int validateInput(int *num)
{
    if (scanf("%d", num) != 1)
    {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 0;
    }

    return 1;
}