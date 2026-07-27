#include <stdio.h>
#include <math.h>
#include <unistd.h>

/**
 * Financial Calculator
 * Calculates simple interest, compound interest, and generates an amortization schedule.
 */

int validateChoice(int choice);
void clearBuffer(void);

int main()
{
    double principal, rate, time, interest;
    int choice;

    printf("Financial Calculator\n"
           "1. Simple Interest Calculation\n"
           "2. Compound Interest Calculation\n"
           "3. Amortization Schedule\n"
           "Enter your choice (1-3): ");
    while (scanf("%d", &choice) != 1 || !validateChoice(choice))
    {
        clearBuffer();
        printf("Invalid choice. Please enter a valid choice (1-3): ");
    }

    printf("\nEnter principal amount: ");
    while (scanf("%lf", &principal) != 1 || principal <= 0 || principal != floor(principal))
    {
        clearBuffer();
        printf("Invalid principal amount. Please enter a positive whole number: ");
    }

    printf("Enter annual interest rate (in percentage): ");
    while (scanf("%lf", &rate) != 1 || rate <= 0)
    {
        clearBuffer();
        printf("Invalid interest rate. Please enter a positive value: ");
    }

    printf("Enter time (in years): ");
    while (scanf("%lf", &time) != 1 || time <= 0)
    {
        clearBuffer();
        printf("Invalid time. Please enter a positive value: ");
    }

    switch (choice)
    {
        /**
         * Simple Interest Calculation:
         * Formula: Simple Interest = (Principal * Rate * Time) / 100
         * Total Amount to Repay = Principal + Simple Interest
         */
        case 1:
            interest = (principal * rate * time) / 100;
            sleep(1);
            printf("\nCalculating Simple Interest...\n");
            sleep(3);
            printf("\nSimple Interest: %.2lf\n", interest);
            printf("Total amount to repay: %.2lf\n", principal + interest);
            break;
        /**
         * Compound Interest Calculation:
         * Formula: Compound Interest = Principal * (1 + (Rate / 100) / n)^(n * Time) - Principal
         * Total Amount = Principal + Compound Interest
         */
        case 2:
        {
            int n;
            printf("\nEnter compounding periods per year (e.g. 12 for monthly): ");
            while (scanf("%d", &n) != 1 || n <= 0 || n > 365)
            {
                clearBuffer();
                printf("Invalid value. Please enter a positive number and not greater than 365: ");
            }
            double amount = principal * pow(1 + (rate / 100) / n, n * time);
            interest = amount - principal;
            sleep(1);
            printf("\nCalculating Compound Interest...\n");
            sleep(3);
            printf("\nCompound Interest: %.2lf\n", interest);
            printf("Total amount: %.2lf\n", amount);
            break;
        }
        /**
         * Amortization Schedule:
         * Calculates monthly payments and generates a schedule showing the breakdown of each payment.
         */
        case 3:
        {
            int months = (int)(time * 12);
            double monthlyRate = (rate / 100) / 12;
            double payment, balance = principal;
            if (monthlyRate == 0)
                payment = principal / months;
            else
                payment = principal * monthlyRate /
                          (1 - pow(1 + monthlyRate, -months));
            sleep(1);
            printf("\nCalculating Amortization Schedule...\n");
            sleep(3);
            printf("\nMonthly payment: %.2lf\n\n", payment);
            printf("%-6s %-12s %-12s %-12s %-12s\n",
                   "Month", "Payment", "Interest", "Principal", "Balance");
            for (int i = 1; i <= months; i++)
            {
                double interestPart = balance * monthlyRate;
                double principalPart = payment - interestPart;
                balance -= principalPart;
                if (balance < 0) balance = 0;
                printf("%-6d %-12.2lf %-12.2lf %-12.2lf %-12.2lf\n",
                       i, payment, interestPart, principalPart, balance);
                /**
                 * fflush(stdout) is used to ensure that the output buffer is flushed 
                 * and the printed output is displayed immediately.
                 */
                fflush(stdout);
                sleep(1);
            }
            break;
        }
    }
    return 0;
}

int validateChoice(int choice)
{
    if (choice < 1 || choice > 3)
    {
        return 0;
    }
    return 1;
}

void clearBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}