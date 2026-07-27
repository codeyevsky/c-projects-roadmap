#include <stdio.h>
#include <limits.h>
#include <unistd.h>

/**
 * Bitwise operator playground
 * This program allows users to explore bitwise operations in C.
 */

 /**
 * I hope i didnt make it so complex for beginners but its best way to 
 * learn bitwise operators is to play with them and see the results.
 */

/**
 * BITS defines the number of bits to display for integer values. 
 * Made 16 because the program is designed to work with 16-bit integers for demonstration purposes.
 */
#define BITS 16  

/**
 * statics for internal use only, not exposed outside this file.
 * its for demonstration purposes, to keep the code organized and encapsulated. 
 * in this repo we dont need it but for larger projects, it helps to avoid name collisions and maintain a clean namespace. 
 */
static int  read_int(const char *prompt, int min, int max, int *out);
static void slow_print(const char *s);
static void print_header(void);
static void print_bits(const char *label, int v);
static void bitwise_logic(void);
static void bitwise_shift(void);

int main(void)
{
    int choice;

    printf("Welcome to bitwise operator playground!\n"
           "  1 - AND, OR, XOR, NOT\n"
           "  2 - Left shift, right shift\n");

    if (!read_int("Enter your choice: ", 1, 2, &choice))
        return 1;

    if (choice == 1)
        bitwise_logic();
    else
        bitwise_shift();

    return 0;
}

/**
 * This function reads an integer from the user input, 
 * ensuring that it falls within the specified range [min, max]. 
 * It prompts the user with the provided message and continues to prompt until a valid integer is entered or the input is closed. 
 * If a valid integer is read, it is stored in the variable pointed to by 'out', and the function returns 1. 
 * If the input is closed (EOF), it returns 0.
 */
static int read_int(const char *prompt, int min, int max, int *out)
{
    /**
     * it initializes infinitely until a valid integer is read from the user input.
     */
    for (;;)
    {
        printf("%s", prompt);

        if (scanf("%d", out) == 1)
        {
            if (*out >= min && *out <= max)
                return 1;
            printf("Out of range. ");
            continue;
        }

        if (feof(stdin))
        {
            printf("\nInput closed. Exiting.\n");
            return 0;
        }

        int c;
        while ((c = getchar()) != '\n' && c != EOF)
            ;
        printf("Invalid input. ");
    }
}

/**
 * This function prints a string to the standard output character by character,
 * with a small delay between each character to create a "slow print" effect.
 */
static void slow_print(const char *s)
{
    for (; *s; s++)
    {
        putchar(*s);
        fflush(stdout);
        usleep(15000);  
    }
}

static void print_header(void)
{
    char line[128];

    snprintf(line, sizeof line, "\n%-8s %8s  %s\n", "expr", "value", "binary");
    slow_print(line);

    snprintf(line, sizeof line, "%-8s %8s  ", "--------", "--------");
    slow_print(line);
    for (int i = 0; i < BITS + BITS / 4 - 1; i++)
        putchar('-');
    putchar('\n');
    fflush(stdout);
}

/**
 * This function prints the binary representation of an integer value 'v' 
 * along with a label. It formats the output to show the label, decimal value, 
 * and binary representation in a structured manner.
 */
static void print_bits(const char *label, int v)
{
    char line[128];
    int  n = 0;

    n += snprintf(line + n, sizeof line - n, "%-8s %8d  ", label, v);

    for (int i = BITS - 1; i >= 0; i--)
    {
        line[n++] = (v >> i) & 1 ? '1' : '0';
        if (i % 4 == 0 && i)
            line[n++] = ' ';
    }
    line[n++] = '\n';
    line[n]   = '\0';

    slow_print(line);
}

/**
 * This function demonstrates bitwise logical operations (AND, OR, XOR, NOT) 
 * on two integers provided by the user. It reads two integers, performs the 
 * operations, and prints the results in both decimal and binary formats.
 */
static void bitwise_logic(void)
{
    int a, b;
    if (!read_int("\nEnter first integer: ",  INT_MIN, INT_MAX, &a)) return;
    if (!read_int("Enter second integer: ", INT_MIN, INT_MAX, &b)) return;
    
    sleep(1);
    printf("\nCalculating bitwise logic operations...\n");
    sleep(3);

    print_header();
    print_bits("a",     a);
    print_bits("b",     b);
    print_bits("a & b", a & b);
    print_bits("a | b", a | b);
    print_bits("a ^ b", a ^ b);
    print_bits("~a",    ~a);
}

/**
 * This function demonstrates bitwise shift operations (left shift and right shift) 
 * on an integer provided by the user. It reads an integer and a shift amount, 
 * performs the shifts, and prints the results in both decimal and binary formats.
 */
static void bitwise_shift(void)
{
    int a, n;
    if (!read_int("\nEnter integer: ", INT_MIN, INT_MAX, &a))  return;
    if (!read_int("Enter shift amount (0-15): ", 0, 15, &n)) return;

    sleep(1);
    printf("\nCalculating bitwise shift operations...\n");
    sleep(3);

    print_header();
    print_bits("a",      a);
    print_bits("a << n", a << n);
    print_bits("a >> n", a >> n);
}