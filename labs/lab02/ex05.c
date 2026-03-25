#include <stdio.h>

#define SECONDS_TO_HOURS 3600
#define SECONDS_TO_MINUTES 60


int main() {
    int n,hours,minutes;

    scanf("%d",&n);

    hours = n / SECONDS_TO_HOURS;
    n -= hours * SECONDS_TO_HOURS;

    minutes = n / SECONDS_TO_MINUTES;
    n -= minutes * SECONDS_TO_MINUTES;

    printf("%02d:%02d:%02d",hours,minutes,n);

    return 0;
}