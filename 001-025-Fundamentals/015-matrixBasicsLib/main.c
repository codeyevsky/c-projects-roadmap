#define _DEFAULT_SOURCE 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * Matrix Basics Library
 * This program demonstrates basic matrix operations: addition, subtraction, multiplication, and transpose.
 * It prompts the user to select an operation, enter the dimension of the square matrices (1 to 10), 
 * and input the values for the matrices. The result is then displayed.
 */

#define MENU_DELAY_MS 300u
#define ROW_DELAY_MS  300u
#define MIN_DIM       1
#define MAX_DIM       10

enum { OP_ADD = 1, OP_SUB, OP_MUL, OP_TRANSPOSE };

/**
 * Accurately reads integers from stdin, with error checking and re-prompting.
 */
int  readInt(const char *prompt, int *out);
int  readIntInRange(const char *prompt, int min, int max, int *out);
void clearInputBuffer(void);

/**
 * Matrix operations: addition, subtraction, multiplication, and transpose.
 */
int  additionMatrix(int dimension,
                    int matrixA[dimension][dimension],
                    int matrixB[dimension][dimension],
                    int result[dimension][dimension]);
int  subtractionMatrix(int dimension,
                       int matrixA[dimension][dimension],
                       int matrixB[dimension][dimension],
                       int result[dimension][dimension]);
int  multiplicationMatrix(int dimension,
                          int matrixA[dimension][dimension],
                          int matrixB[dimension][dimension],
                          int result[dimension][dimension]);
int  transposeMatrix(int dimension,
                     int matrix[dimension][dimension],
                     int result[dimension][dimension]);

/**
 * Menu / matrix I/O helpers: everything main() used to do inline.
 */
void        printMenu(void);
const char *operationName(int choice);
int         operandCount(int choice);
int         readMatrix(int dimension, int matrix[dimension][dimension], char name);
void        showMatrix(int dimension, int matrix[dimension][dimension], char name);
int         applyOperation(int choice, int dimension,
                           int matrixA[dimension][dimension],
                           int matrixB[dimension][dimension],
                           int result[dimension][dimension]);

/**
 * Miscellaneous utility functions: delay and slow printing.
 */
void delayMsec(unsigned int ms);
void printLinesSlow(const char *lines[], 
                    int count, 
                    unsigned int delayMs);
void printMatrixSlow(int dimension,
                     int matrix[dimension][dimension],
                     unsigned int delayMs);


int main(void)
{
    int choice;
    int dimension;

    printMenu();

    if (!readIntInRange("Enter choice (1-4): ", OP_ADD, OP_TRANSPOSE, &choice) ||
        !readIntInRange("\nEnter dimension number (1-10): ", MIN_DIM, MAX_DIM, &dimension))
    {
        fprintf(stderr, "\nInput closed. Exiting.\n");
        return EXIT_FAILURE;
    }

    int matrices[2][dimension][dimension];
    int result[dimension][dimension];
    int count = operandCount(choice);

    for (int i = 0; i < count; i++)
    {
        if (!readMatrix(dimension, matrices[i], 'A' + i))
        {
            fprintf(stderr, "\nInput closed. Exiting.\n");
            return EXIT_FAILURE;
        }
    }

    for (int i = 0; i < count; i++)
        showMatrix(dimension, matrices[i], 'A' + i);

    printf("\nYou chose %s.\n", operationName(choice));
    applyOperation(choice, dimension, matrices[0], matrices[1], result);

    printf("\nResult:\n");
    printMatrixSlow(dimension, result, ROW_DELAY_MS);

    return 0;
}


/**
 * Prints the welcome banner and the list of available operations.
 */
void printMenu(void)
{
    const char *menu[] = {
        "",
        "Matrix Basics Library",
        "For addition press 1",
        "For subtraction press 2",
        "For multiplication press 3",
        "For transpose press 4"
    };

    printLinesSlow(menu, sizeof menu / sizeof menu[0], MENU_DELAY_MS);
}

/**
 * Human-readable name of an operation, used in the "You chose ..." line.
 */
const char *operationName(int choice)
{
    switch (choice)
    {
    case OP_ADD:       return "addition";
    case OP_SUB:       return "subtraction";
    case OP_MUL:       return "multiplication";
    case OP_TRANSPOSE: return "transpose";
    default:           return "an unknown operation";
    }
}

/**
 * How many matrices the user has to type in for the chosen operation.
 */
int operandCount(int choice)
{
    return (choice == OP_TRANSPOSE) ? 1 : 2;
}

/**
 * Fills one matrix from stdin, prompting for every position.
 * Returns 1 on success, 0 if the input stream was closed (EOF).
 */
int readMatrix(int dimension, int matrix[dimension][dimension], char name)
{
    char prompt[64];

    printf("\nEntering values for matrix %c.\n", name);

    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            snprintf(prompt, sizeof prompt,
                     "Enter value for position [%d][%d]: ", i, j);

            if (!readInt(prompt, &matrix[i][j]))
                return 0;
        }
    }
    return 1;
}

/**
 * Prints a labelled matrix ("Matrix A:" followed by its rows).
 */
void showMatrix(int dimension, int matrix[dimension][dimension], char name)
{
    printf("\nMatrix %c:\n", name);
    printMatrixSlow(dimension, matrix, ROW_DELAY_MS);
}

/**
 * Dispatches to the operation the user picked.
 * Returns 1 on success, 0 for an unknown choice.
 */
int applyOperation(int choice, int dimension,
                   int matrixA[dimension][dimension],
                   int matrixB[dimension][dimension],
                   int result[dimension][dimension])
{
    switch (choice)
    {
    case OP_ADD:       return additionMatrix(dimension, matrixA, matrixB, result);
    case OP_SUB:       return subtractionMatrix(dimension, matrixA, matrixB, result);
    case OP_MUL:       return multiplicationMatrix(dimension, matrixA, matrixB, result);
    case OP_TRANSPOSE: return transposeMatrix(dimension, matrixA, result);
    default:           return 0;
    }
}

/**
 * Reads one integer from stdin, re-prompting until the input is valid.
 * Returns 1 on success, 0 if the input stream was closed (EOF).
 */
int readInt(const char *prompt, int *out)
{
    int rc;

    for (;;)
    {
        printf("%s", prompt);
        fflush(stdout);

        rc = scanf("%d", out);

        if (rc == EOF)
            return 0;

        if (rc == 1)
        {
            clearInputBuffer();
            return 1;
        }

        printf("\nError! Please enter a whole integer number.\n");
        clearInputBuffer();
    }
}

/**
 * Reads an integer and keeps asking until it falls within [min, max].
 * Returns 1 on success, 0 on EOF.
 */
int readIntInRange(const char *prompt, int min, int max, int *out)
{
    for (;;)
    {
        if (!readInt(prompt, out))
            return 0;

        if (*out >= min && *out <= max)
            return 1;

        printf("\nError! Please enter a number between %d and %d.\n", min, max);
    }
}

void clearInputBuffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int additionMatrix(int dimension,
                   int matrixA[dimension][dimension],
                   int matrixB[dimension][dimension],
                   int result[dimension][dimension])
{
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    return 1;
}

int subtractionMatrix(int dimension,
                      int matrixA[dimension][dimension],
                      int matrixB[dimension][dimension],
                      int result[dimension][dimension])
{
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            result[i][j] = matrixA[i][j] - matrixB[i][j];
        }
    }
    return 1;
}

int multiplicationMatrix(int dimension,
                         int matrixA[dimension][dimension],
                         int matrixB[dimension][dimension],
                         int result[dimension][dimension])
{
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < dimension; k++)
            {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    return 1;
}

/**
 * Transposes a square matrix of the given dimension.
 * The result is stored in the provided result matrix.
 */
int transposeMatrix(int dimension,
                    int matrix[dimension][dimension],
                    int result[dimension][dimension])
{
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }
    return 1;
}

/**
 * Flushes pending output, then pauses for the given number of milliseconds.
 * Passing 0 flushes without pausing.
 * This is the only place that touches the platform sleep call.
 */
void delayMsec(unsigned int ms)
{
    fflush(stdout);

    if (ms > 0)
        usleep(ms * 1000);
}

/**
 * Prints an array of strings one line at a time, pausing delayMs between lines.
 * The newline is added here, so the strings themselves should not contain one.
 */
void printLinesSlow(const char *lines[], int count, unsigned int delayMs)
{
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", lines[i]);
        delayMsec(delayMs);
    }
}

/**
 * Prints a matrix one row at a time, pausing delayMs between rows.
 * Pass 0 for delayMs to print instantly.
 */
void printMatrixSlow(int dimension,
                     int matrix[dimension][dimension],
                     unsigned int delayMs)
{
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
        delayMsec(delayMs);
    }
}