#include <stdio.h>
#include <ctype.h>

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

    printf("\nWelcome to the Number Base Converter!\n");
    printf("\nSelect the base of the number you want to convert:\n");
    printBaseMenu();
    sourceBase = readBase();

    printf("\nSelect the base you want to convert to:\n");
    printBaseMenu();
    targetBase = readBase();

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

    if (!isValidNumber(input, sourceBase))
    {
        printf("Invalid number for the selected base.\n");
        return 1;
    }

    value = parseToValue(input, sourceBase);

    printf("The result of converting %s is: ", input);
    printInBase(value, targetBase);
    printf("\n");

    return 0;
}

/* Returns 1 if base is one of the supported base letters, 0 otherwise. */
int isValidBase(char base)
{
    return base == 'B' || base == 'O' || base == 'D' || base == 'H';
}

/* Maps a base letter to its numeric radix, or 0 if the letter is unknown. */
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

/* Converts a single character to its digit value, or -1 if not a hex digit. */
int charToDigit(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;

    return -1;
}

/* Checks that value is non-empty and every digit is legal for the base. */
int isValidNumber(const char value[], char base)
{
    int radix = baseToRadix(base);
    int i;

    if (value[0] == '\0')
        return 0;

    for (i = 0; value[i] != '\0'; i++)
    {
        int digit = charToDigit(value[i]);

        if (digit < 0 || digit >= radix)
            return 0;
    }

    return 1;
}

/* Converts a validated string in the given base to a numeric value. */
unsigned long long parseToValue(const char value[], char base)
{
    int radix = baseToRadix(base);
    unsigned long long result = 0;
    int i;

    for (i = 0; value[i] != '\0'; i++)
        result = result * radix + charToDigit(value[i]);

    return result;
}

/* Prints a numeric value in the requested base (hex uses uppercase). */
void printInBase(unsigned long long value, char base)
{
    const char digits[] = "0123456789ABCDEF";
    int radix = baseToRadix(base);
    char buffer[65];
    int i = 0;

    if (value == 0)
    {
        printf("0");
        return;
    }

    while (value > 0)
    {
        buffer[i++] = digits[value % radix];
        value /= radix;
    }

    while (i > 0)
        printf("%c", buffer[--i]);
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

/* Reads one base letter from the user and returns it in uppercase. */
char readBase(void)
{
    char base;
    scanf(" %c", &base);
    return toupper(base);
}
