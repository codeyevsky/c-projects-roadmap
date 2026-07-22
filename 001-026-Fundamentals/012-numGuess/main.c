#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * number guessing game
 * The program generates a random number between 1 and 100 and allows the user to guess the number within 15 attempts.
 * It provides feedback on whether the guess is too low or too high and congratulates the user if they guess correctly.
 * If the user fails to guess the number within 15 attempts, the program reveals the correct number.
 */

int main()
{
    int number, guess, attempts = 0;
    srand(time(NULL)); 
    number = rand() % 100 + 1; 

    printf("\nWelcome to the Number Guessing Game!\n"
           "I have selected a random number between 1 and 100.\n"
           "You have 15 attempts to guess the correct number.\n");
    do
    {
        printf("Enter your guess (attempt %d of 15): ", attempts + 1);
        while (scanf("%d", &guess) != 1 || guess < 1 || guess > 100)
        {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number between 1 and 100: ");
        }
        attempts++;

        if (guess < number)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > number)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            
            printf("\n=================================================================\n"
                   "  Congratulations! You've guessed the number %d in %d attempts.\n"
                   "=================================================================\n",
       number, attempts);

        }
    } while (guess != number && attempts < 15);

    if (attempts == 15 && guess != number)
    {
        printf("Sorry! You've used all 15 attempts. The number was %d.\n", number);
    }

    return 0;
}