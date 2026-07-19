#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char firstBaseNumChar;
    char secondBaseNumChar;

    printf( "\nWelcome to the Number Base Converter!\n"
            "Select the base of the number you want to convert:\n"
            "Binary: B\nOctal: O\nDecimal: D\nHexadecimal: H\n"
            "Choose a base: ");
    scanf(" %c", &firstBaseNumChar);

    printf( "\nSelect the base you want to convert to:\n"
            "Binary: B\nOctal: O\nDecimal: D\nHexadecimal: H\n"
            "Choose a base: ");
    scanf(" %c", &secondBaseNumChar);


    firstBaseNumChar = toupper(firstBaseNumChar);
    secondBaseNumChar = toupper(secondBaseNumChar);

    return 0;
}

int binaryToOctal(int binary, int octal){


};