#include <stdio.h>
#include <time.h>
#include <unistd.h>

/**
 * Digital Clock
 * Displays the current time in HH:MM:SS format, updating every second.
 */

int main() 
{

    /**
     * time_t is a data type used to represent time in seconds since the epoch (January 1, 1970).
     * struct tm is a structure that holds the components of time (year, month, day, hour, minute, second).
     */
    time_t rawtime;
    struct tm *pTime;

    printf("DIGITAL CLOCK\n");

    while (1) {
        time(&rawtime);

        pTime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d",
               pTime->tm_hour,
               pTime->tm_min,
               pTime->tm_sec);

        fflush(stdout);
        sleep(1);
    }

    return 0;
}