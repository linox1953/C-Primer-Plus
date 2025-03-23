#include <stdio.h>

int power(int num, int times);

int main(void)
{
    int nums[8], i;
    for (i = 0; i < 8; i++)
        nums[i] = power(2, i + 1);
        
    i = 0;
    do
    {
        printf("%d\n", nums[i]);
        i++;
    } while (i < 8);
    
    return 0;
}

int power(int num, int times)
{
    int sum = 1, i;
    for (i = 1; i <= times; i++)
        sum *= num;
    return sum;
}