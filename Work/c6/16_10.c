#include <stdio.h>

int main(void)
{
    int lower, upper;
    int sum;
    int i;

    printf("Enter the lower and upper integer limits: ");
    scanf("%d%d", &lower, &upper);
    while (upper > lower)
    {
        sum = 0;
        for (i = lower; i <= upper; i++)
            sum += i * i;
        printf("The sum from %d to %d is %d\n",
                lower, upper, sum);
        printf("Enter the next lower integer: ");
        scanf("%d", &lower);
    }
    return 0;
}