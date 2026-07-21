#include <stdio.h>

/**
 * FizzBuzz Challenge
 * This program prompts the user to input a number and then counts from 1 to that number.
 * For multiples of 3, it prints "Fizz" instead of the number.
 * For multiples of 5, it prints "Buzz" instead of the number.
 * For numbers that are multiples of both 3 and 5, it prints "FizzBuzz".
 */

int main()
{
    int number;

    printf("FizzBuzz Challenge\n");
    printf("Choose a number to count up to: ");

    if (scanf("%d", &number) != 1) {
        printf("Error: Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    
    /*
        if number is fullly divisible by 3 and 5, print "FizzBuzz"
        if number is fullly divisible by 3, print "Fizz"
        if number is fullly divisible by 5, print "Buzz"
        else print the number
    */
    for (int i = 1; i <= number; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}