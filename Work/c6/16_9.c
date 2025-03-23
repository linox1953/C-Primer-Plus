#include <stdio.h>

void cal(float n, float m);

int main(void)
{
    float n, m;
    printf("Enter two numbers (not number to quit): ");
    while (scanf("%f%f", &n, &m) == 2)
    {
        cal(n, m);
        printf("Enter two numbers (not nubmer to quit): ");
    }
    return 0;
}

void cal(float n, float m)
{
    if (n > m)
        printf("res = %.2f\n", (n - m) / (n * m));
    if (m > n)
        printf("res = %.2f\n", (m - n) / (n * m));
}