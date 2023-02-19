#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main()
{
    int d = 1;

    while (1)
    {
        system("clear");
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);

        printf("\n Clock: ");
        printf("%i:%i:%i", tm.tm_hour, tm.tm_min, tm.tm_sec);
        printf("\n Date: ");
        printf("%i/%i/%i", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
        sleep(d);
    }
}