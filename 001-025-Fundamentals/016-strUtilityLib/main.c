#include <stdio.h>
#include <string.h>

/**
 * String Utility Library
 * This program demonstrates basic string operations.
 * strlen, strcpy, strcat, strcmp, and strtok string functions are implemented in this library.
 * We name them with a "my_" prefix to avoid name collision with the standard library functions.
 * string.h is included only so each result can be checked against the real implementation.
 */

size_t my_strlen(const char *s);
char  *my_strcpy(char *dest, const char *src);
char  *my_strcat(char *dest, const char *src);
int    my_strcmp(const char *s1, const char *s2);
char  *my_strtok(char *str, const char *delim);

/**
 * Helper used by my_strtok: reports whether c appears in the delimiter set.
 * Declared static because it is an implementation detail, not part of the library.
 */
static int is_delim(char c, const char *delim);

/**
 * strcmp only guarantees the sign of its return value, not the exact number,
 * so results are compared as -1 / 0 / 1 rather than raw integers.
 */
static int sign(int value);


int main(void)
{
    /**
     * my_strlen: returns the number of characters before the terminator.
     */
    printf("\n--- strlen ---\n"
    "\"hello\" -> mine: %zu, real: %zu\n", my_strlen("hello"), strlen("hello"),
    "\"\"      -> mine: %zu, real: %zu\n", my_strlen(""), strlen(""),
    "\"a\"     -> mine: %zu, real: %zu\n", my_strlen("a"), strlen("a")
    );

    /**
     * my_strcpy / my_strcat: each version writes into its own buffer.
     * Sharing one buffer between the two calls would let the first result be
     * overwritten before printf reads it, since all arguments are evaluated
     * before the call and their evaluation order is unspecified.
     */
    char mine[32];
    char real[32];

    printf("\n--- strcpy ---\n");
    my_strcpy(mine, "hello");
    strcpy(real, "hello");
    printf("mine: \"%s\", real: \"%s\"\n", mine, real);

    printf("\n--- strcat ---\n");
    my_strcat(mine, " world");
    strcat(real, " world");
    printf("mine: \"%s\", real: \"%s\"\n", mine, real);

    /**
     * my_strcmp: less than, greater than, and equal cases.
     */
    printf("\n--- strcmp ---\n");
    printf("\"hello\" vs \"world\" -> mine: %d, real: %d\n",
           sign(my_strcmp("hello", "world")), sign(strcmp("hello", "world")));
    printf("\"world\" vs \"hello\" -> mine: %d, real: %d\n",
           sign(my_strcmp("world", "hello")), sign(strcmp("world", "hello")));
    printf("\"hello\" vs \"hello\" -> mine: %d, real: %d\n",
           sign(my_strcmp("hello", "hello")), sign(strcmp("hello", "hello")));
    printf("\"abc\"   vs \"abcd\"  -> mine: %d, real: %d\n",
           sign(my_strcmp("abc", "abcd")), sign(strcmp("abc", "abcd")));

    /**
     * my_strtok: writes terminators into the string it is given, so the input
     * must be a modifiable array. A string literal would be undefined behaviour.
     * Each version gets its own copy for the same reason.
     */
    printf("\n--- strtok ---\n");
    char mineText[] = ",,hello world,, this is a test,,";
    char realText[] = ",,hello world,, this is a test,,";
    char *token;

    printf("mine: ");
    for (token = my_strtok(mineText, " ,"); token != NULL; token = my_strtok(NULL, " ,"))
        printf("[%s]", token);

    printf("\nreal: ");
    for (token = strtok(realText, " ,"); token != NULL; token = strtok(NULL, " ,"))
        printf("[%s]", token);

    printf("\n\n");
    return 0;
}


/**
 * Walks forward until the terminator is reached, counting the steps taken.
 */
size_t my_strlen(const char *s)
{
    size_t len = 0;

    while (*s++)
    {
        len++;
    }
    return len;
}

/**
 * Copies src into dest one character at a time.
 * The assignment itself is the loop condition, so the loop stops right after
 * the terminator has been copied. Returns the start of dest.
 */
char *my_strcpy(char *dest, const char *src)
{
    char *d = dest;

    while ((*d++ = *src++))
        ;
    return dest;
}

/**
 * Walks to the terminator of dest, then copies src from that point on.
 * dest must be large enough to hold both strings plus the terminator.
 */
char *my_strcat(char *dest, const char *src)
{
    char *d = dest;

    while (*d)
    {
        d++;
    }

    while ((*d++ = *src++))
        ;
    return dest;
}

/**
 * Advances while both strings match, then returns the difference of the first
 * differing characters. The unsigned char cast matters: plain char may be
 * signed, which would order bytes above 127 incorrectly.
 */
int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

/**
 * Splits a string into tokens across repeated calls.
 * Pass the string on the first call and NULL afterwards; the position is kept
 * in a static pointer between calls. Runs of delimiters count as one, so empty
 * tokens are never returned. Returns NULL once the string is exhausted.
 */
char *my_strtok(char *str, const char *delim)
{
    static char *last;
    char *token;

    if (str == NULL)
        str = last;

    if (str == NULL)
        return NULL;

    while (*str && is_delim(*str, delim))
        str++;

    if (*str == '\0')
    {
        last = NULL;
        return NULL;
    }

    token = str;

    while (*str && !is_delim(*str, delim))
        str++;

    if (*str == '\0')
    {
        last = NULL;
    }
    else
    {
        *str = '\0';    
        last = str + 1; 
    }
    return token;
}

static int is_delim(char c, const char *delim)
{
    while (*delim)
    {
        if (c == *delim)
            return 1;
        delim++;
    }
    return 0;
}

static int sign(int value)
{
    if (value > 0)
        return 1;
    if (value < 0)
        return -1;
    return 0;
}