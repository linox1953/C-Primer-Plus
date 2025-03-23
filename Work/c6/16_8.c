#include <stdio.h>

int main(void)
{
    float n, m, res;
    printf("Enter two numbers (not number to quit): ");
    while (scanf("%f%f", &n, &m) == 2)
    {
        if (n > m)
            res = (n - m) / (n * m);
        if (m > n)
            res = (m - n) / (n * m);
        printf("res = %.2f\n", res);
        printf("Enter two numbers (not nubmer to quit): ");
    }
    
    return 0;
}