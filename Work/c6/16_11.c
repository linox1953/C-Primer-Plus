#include <stdio.h>

int main(void)
{
    int nums[8], num;
    int i;
    printf("Enter 8 integers: ");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &num);
        nums[i] = num;
    }

    for (i = 7; i >= 0; i--)
        printf("%d ", nums[i]);
    
    return 0;
}