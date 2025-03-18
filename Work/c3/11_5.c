#include <stdio.h>

int main(void)
{
    int ages;
    double seconds;
    printf("Enter your age:");
    scanf("%d", &ages);
    seconds = ages * 3.156e7;
    printf("You have been living for %f seconds", seconds);
    return 0;
}