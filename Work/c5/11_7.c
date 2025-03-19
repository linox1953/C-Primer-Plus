#include <stdio.h>

void cublic(double f1);
int main(void)
{
    float f1;
    printf("Enter a float: ");
    scanf("%f", &f1);
    cublic(f1);
    return 0;
}

void cublic(double f1)
{
    printf("%.2f", f1 * f1 * f1);
}