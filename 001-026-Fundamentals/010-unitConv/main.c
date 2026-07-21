#include <stdio.h>
#include <math.h>
#include <unistd.h>

int validateChoice(int choice);

int main() {
    printf("Unit Conversion Program\n"
            "This program converts between different units of measurement.\n"
            "Please select the type of conversion you would like to perform:\n"
            "1. Meters to Feet\n"
            "2. Feet to Meters\n"
            "3. Kilograms to Pounds\n"
            "4. Pounds to Kilograms\n"
            "Enter your choice: ");
    int choice;
    while (scanf("%d", &choice) != 1 || !validateChoice(choice))
    {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        printf("\nInvalid choice. Please enter a number between 1 and 4: ");
    }

    switch (choice) {
        case 1: {
            double meters;
            printf("\nEnter the value in meters: ");
            while (scanf("%lf", &meters) != 1 || meters <= 0 || meters > 10000)
            {
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                printf("Invalid input. Please enter a number between 0 and 10000: ");
            }
            double feet = meters * 3.28084;
            sleep(1);
            printf("\nCalculating conversion...\n");
            sleep(3);
            printf("\n%.2f meters is equal to %.2f feet.\n", meters, feet);
            break;
        }
        case 2: {
            double feet;
            printf("\nEnter the value in feet: ");
            while (scanf("%lf", &feet) != 1 || feet <= 0 || feet > 10000)
            {
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                printf("Invalid input. Please enter a number between 0 and 10000: ");
            }
            double meters = feet / 3.28084;
            sleep(1);
            printf("\nCalculating conversion...\n");
            sleep(3);
            printf("\n%.2f feet is equal to %.2f meters.\n", feet, meters);
            break;
        }
        case 3: {
            double kilograms;
            printf("\nEnter the value in kilograms: ");
            while (scanf("%lf", &kilograms) != 1 || kilograms <= 0 || kilograms > 10000)
            {
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                printf("Invalid input. Please enter a number between 0 and 10000: ");
            }
            double pounds = kilograms * 2.20462;
            sleep(1);
            printf("\nCalculating conversion...\n");
            sleep(3);
            printf("\n%.2f kilograms is equal to %.2f pounds.\n", kilograms, pounds);
            break;
        }
        case 4: {
            double pounds;
            printf("\nEnter the value in pounds: ");
            while (scanf("%lf", &pounds) != 1 || pounds <= 0 || pounds > 10000)
            {
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                printf("Invalid input. Please enter a number between 0 and 10000: ");
            }
            double kilograms = pounds / 2.20462;
            sleep(1);
            printf("\nCalculating conversion...\n");
            sleep(3);
            printf("\n%.2f pounds is equal to %.2f kilograms.\n", pounds, kilograms);
            break;
        }
    }
    
    return 0;
}

int validateChoice(int choice) {
    if (choice < 1 || choice > 4) {
        printf("Invalid choice. Please select a number between 1 and 4.\n");
        return 0;
    }
    return 1;
}