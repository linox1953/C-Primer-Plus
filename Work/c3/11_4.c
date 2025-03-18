#include <stdio.h>

int main(void)
{
    float f1;

    printf("Enter a floating-point value:");
    scanf("%f", &f1);
    printf("fixed-point notation: %f\n", f1);
    printf("exponential notation: %e\n", f1);
    printf("p notation: %a\n", f1);

    return 0;
}