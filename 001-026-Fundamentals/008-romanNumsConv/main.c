#include <stdio.h>
#include <string.h>

/**
 * Roman Numeral Converter
 * This program allows the user to convert between Roman numerals and modern decimal numbers.
 * The user can choose to convert from Roman to Modern or from Modern to Roman.
 */

int validateInput(int choice);
int romanToModern(char *roman);
void modernToRoman(int num);
void clearInputBuffer(void);

int main(void)
{
    int choice;
    int num;
    char roman[20];

    printf("Welcome to the Roman Numeral Converter!\n");
    printf("For Roman to Modern conversion press 1\n");
    printf("For Modern to Roman conversion press 2\n");

    while (1)
    {
        printf("Enter your choice (1 or 2): ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Error: Invalid input. Please enter a number.\n");
            clearInputBuffer();
            continue;
        }

        clearInputBuffer();

        if (validateInput(choice))
            break;
    }

    if (choice == 1)
    {
        printf("Enter Roman numeral: ");
        scanf("%19s", roman);

        int result = romanToModern(roman);
        printf("Result: %d\n", result);
    }
    else
    {
        while (1)
        {
            printf("Enter a number (1-3999): ");

            if (scanf("%d", &num) != 1)
            {
                printf("Error: Invalid number.\n");
                clearInputBuffer();
                continue;
            }

            clearInputBuffer();

            if (num < 1 || num > 3999)
            {
                printf("Error: Number must be between 1 and 3999.\n");
                continue;
            }

            break;
        }

        printf("Result: ");
        modernToRoman(num);
        printf("\n");
    }

    return 0;
}

/* 
    Checks whether the user's menu choice is valid.
*/
int validateInput(int choice)
{
    if (choice != 1 && choice != 2)
    {
        printf("Error: Invalid choice. Please enter 1 or 2.\n");
        return 0;
    }

    return 1;
}

/* 
    Converts a Roman numeral string into its decimal value.
*/
int romanToModern(char *roman)
{
    int result = 0;
    int prevValue = 0;

    for (int i = strlen(roman) - 1; i >= 0; i--)
    {
        int value = 0;

        switch (roman[i])
        {
            case 'I':
                value = 1;
                break;
            case 'V':
                value = 5;
                break;
            case 'X':
                value = 10;
                break;
            case 'L':
                value = 50;
                break;
            case 'C':
                value = 100;
                break;
            case 'D':
                value = 500;
                break;
            case 'M':
                value = 1000;
                break;
            default:
                printf("Error: Invalid Roman numeral.\n");
                return 0;
        }

        if (value < prevValue)
            result -= value;
        else
            result += value;

        prevValue = value;
    }

    return result;
}

/* 
    Converts a decimal number into a Roman numeral. 
*/
void modernToRoman(int num)
{
    int values[] =
    {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };

    char *numerals[] =
    {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    for (int i = 0; i < 13; i++)
    {
        while (num >= values[i])
        {
            printf("%s", numerals[i]);
            num -= values[i];
        }
    }
}

/* 
    Clears any remaining characters from the input buffer. 
*/
void clearInputBuffer(void)
{
    int c; 
    while ((c = getchar()) != '\n' && c != EOF);
}