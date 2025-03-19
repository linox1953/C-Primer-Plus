#include <stdio.h>
#define MPH 60

int main(void)
{
    int minutes;
    int hours, mins;
    printf("Enter the minutes: ");
    scanf("%d", &minutes);
    while (minutes > 0)
    {
        hours = minutes / MPH;
        mins = minutes % MPH;
        printf("%d minutes equals to %d hour(s) and %d minutes\n",
               minutes, hours, mins);
        printf("Enter the minutes (<=0 to quit): ");
        scanf("%d", &minutes);
    }

    return 0;
}