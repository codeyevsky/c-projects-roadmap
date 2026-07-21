#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Clears all remaining characters from the input buffer. */
void clearInputBuffer(void);

int main(void)
{
    int num1, num2;
    char operator;
    char input[32];

    /* Read and validate the first number. */
    printf("Enter first number: ");
    if (scanf("%d", &num1) != 1)
    {
        printf("Error: Invalid number.\n");
        clearInputBuffer();
        return 1;
    }

    /* Reject inputs such as "12abc". */
    if (getchar() != '\n')
    {
        printf("Error: Invalid number.\n");
        clearInputBuffer();
        return 1;
    }

    /* Read the operator as a full line. and validate it. */
    printf("Enter an operator (+, -, *, /): ");
    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        printf("Error: Failed to read operator.\n");
        return 1;
    }

    /* Remove the trailing newline character, if present. */
    input[strcspn(input, "\n")] = '\0';

    /* The operator must consist of exactly one character. */
    if (strlen(input) != 1)
    {
        printf("Error: Please enter only one operator.\n");
        return 1;
    }

    operator = input[0];

    /* Make sure the operator is supported. */
    if (operator != '+' &&
        operator != '-' &&
        operator != '*' &&
        operator != '/')
    {
        printf("Error: Invalid operator.\n");
        return 1;
    }

    /* Read and validate the second number. */
    printf("Enter second number: ");
    if (scanf("%d", &num2) != 1)
    {
        printf("Error: Invalid number.\n");
        clearInputBuffer();
        return 1;
    }

    /* Reject inputs such as "25xyz". */
    if (getchar() != '\n')
    {
        printf("Error: Invalid number.\n");
        clearInputBuffer();
        return 1;
    }

    /* Perform the selected operation. */
    switch (operator)
    {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            else
            {
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            }
            break;
    }

    return 0;
}

/* Removes all remaining characters until a newline or EOF is reached. */
void clearInputBuffer(void)
{
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    }
}