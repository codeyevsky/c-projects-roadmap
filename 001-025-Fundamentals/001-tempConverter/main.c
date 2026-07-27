#include <stdio.h>
#include <ctype.h>

/**
 * Temperature Conversion Calculator
 * This program allows the user to convert temperatures between Celsius and Fahrenheit.
 * The user can choose the conversion direction and input the temperature value.
 * The program will then display the converted temperature.
 */

/* Celsius -> Fahrenheit */
double celsiusToFahrenheit(double celsius) {
    return (celsius * 1.8) + 32;
}

/* Fahrenheit -> Celsius */
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

int main() 
{
    char choice;
    double temperature;

    printf("\n=== Temperature Conversion Calculator ===\n");
    printf("C - Celsius to Fahrenheit\n");
    printf("F - Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    choice = toupper(choice);

    switch (choice) {
        case 'C':
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &temperature);

            printf("%.2lf Celsius = %.2lf Fahrenheit\n",
                   temperature,
                   celsiusToFahrenheit(temperature));
            break;

        case 'F':
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &temperature);

            printf("%.2lf Fahrenheit = %.2lf Celsius\n",
                   temperature,
                   fahrenheitToCelsius(temperature));
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}