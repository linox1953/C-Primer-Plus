#include <stdio.h>

int main(void)
{
    float cm_tall;
    printf("Please enter your height(cm): ");
    scanf("%f", &cm_tall);
    printf("Your height is %.3f m", cm_tall * 0.01);
    return 0;
}