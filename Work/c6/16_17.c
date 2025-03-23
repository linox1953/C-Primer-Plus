#include <stdio.h>
#define RATE 0.08

int main(void)
{
    double balance = 1000000;
    int years;
    while (balance > 0)
    {
        balance += balance * RATE;
        balance -= 100000;
        years++;
    }
    printf("Need %d years", years);
    return 0;
}