#include <stdio.h>

int main(void)
{
    int count, sum, days;
    printf("Enter the days: ");
    scanf("%d", &days);

    count = 0;
    sum = 0;
    while (count++ < days)
    {
        sum = sum + count;
    }
    printf("sum = %d\n", sum);
    return 0;
}