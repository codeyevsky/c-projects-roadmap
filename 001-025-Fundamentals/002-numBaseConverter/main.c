#include <stdio.h>
#include <ctype.h>

/**
 * Number Base Converter
 * This program allows the user to convert numbers between different bases: Binary, Octal, Decimal, and Hexadecimal.
 * The user can select the source base and the target base, input a number in the source base, 
 * and the program will display the converted number in the target base.
 */

int  isValidBase(char base);
int  baseToRadix(char base);
int  charToDigit(char c);
int  isValidNumber(const char value[], char base);
unsigned long long parseToValue(const char value[], char base);
void printInBase(unsigned long long value, char base);
void printBaseMenu(void);
char readBase(void);

int main(void)
{

    char sourceBase;
    char targetBase;
    char input[65];
    unsigned long long value; 
    /* 
        unsigned long long value is for storing the decimal value of the input number,
    */
    

    printf("\nWelcome to the Number Base Converter!\n");
    printf("\nSelect the base of the number you want to convert:\n");
    printBaseMenu();
    sourceBase = readBase();

    printf("\nSelect the base you want to convert to:\n");
    printBaseMenu();
    targetBase = readBase();

    /*
        Check whether the first or second base is valid and if they are the same.
    */
    if (!isValidBase(sourceBase))
    {
        printf("Invalid input for the first base.\n");
        return 1;
    }
    
    if (!isValidBase(targetBase))
    {
        printf("Invalid input for the second base.\n");
        return 1;
    }
    
    if (sourceBase == targetBase)
    {
        printf("Both bases are the same. No conversion needed.\n");
        return 1;
    }

    printf("Enter value to convert: ");
    scanf("%64s", input);

    /*
        Validate that the number matches
        the selected source base.
    */
    if (!isValidNumber(input, sourceBase))
    {
        printf("Invalid number for the selected base.\n");
        return 1;
    }

    /*
        Convert the input string into
        its decimal numeric value.
    */
    value = parseToValue(input, sourceBase);

    /*
        Print the result in the target base.
    */
    printf("The result of converting %s is: ", input);
    printInBase(value, targetBase);
    printf("\n");

    return 0;
}

void printBaseMenu(void)
{
    printf(
        "Binary: B\n"
        "Octal: O\n"
        "Decimal: D\n"
        "Hexadecimal: H\n"
        "Choose a base: ");
}

char readBase(void)
{
    char base;
    scanf(" %c", &base);
    return toupper(base);
}

int isValidBase(char base)
{
    return base == 'B' || base == 'O' || base == 'D' || base == 'H';
}

/*
    Converts the base letter into
    its corresponding radix.
    Binary (B) = 2, Octal (O) = 8, Decimal (D) = 10, Hexadecimal (H) = 16
    default case returns 0 for invalid base.
*/
int baseToRadix(char base)
{
    switch (base)
    {
        case 'B': return 2; 
        case 'O': return 8; 
        case 'D': return 10;
        case 'H': return 16;
        default:  return 0;
    }
}

/*
    Converts a character into its
    numeric digit value. (numbers 0-9 and letters A-F/a-f)
*/
int charToDigit(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';

    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;

    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;

    /*
        Invalid character for a digit.
    */
    return -1;
}

int isValidNumber(const char value[], char base)
{
    int radix = baseToRadix(base);
    int i;

    if (value[0] == '\0')
        return 0;

    /*
        Check every character.
    */
    for (i = 0; value[i] != '\0'; i++)
    {
        int digit = charToDigit(value[i]);

        /*
            Invalid digit or digit outside
            the selected base.
        */
        if (digit < 0 || digit >= radix)
            return 0;
    }

    return 1;
}

/* 
    Converts a validated number string
    into its decimal value.
*/
unsigned long long parseToValue(const char value[], char base)
{
    int radix = baseToRadix(base);
    unsigned long long result = 0;
    int i;

    /*
        Multiply the current value by the radix
        and add the next digit.
    */
    for (i = 0; value[i] != '\0'; i++)
        result = result * radix + charToDigit(value[i]);

    return result;
}

void printInBase(unsigned long long value, char base)
{
    /*
        Characters used for all supported bases.
    */
    const char digits[] = "0123456789ABCDEF";

    /*
        Base radix.
    */
    int radix = baseToRadix(base);

    /*
        Temporary buffer for digits.
    */
    char buffer[65];

    /*
        Buffer index.
    */
    int i = 0;

    /*
        Special case for zero.
    */
    if (value == 0)
    {
        printf("0");
        return;
    }

    /*
        Store digits in reverse order.
    */
    while (value > 0)
    {
        buffer[i++] = digits[value % radix];
        value /= radix;
    }

    /*
        Print digits in correct order.
    */
    while (i > 0)
        printf("%c", buffer[--i]);
}