#include <stdio.h>

int main(void)
{
    int size = 14;
    int flag;
    double cost, bill;
    if (size > 12)
        goto a;
    goto b;
    a: printf("Hello");
    printf("You");
    b: printf("Welcome");
    return 0;
}