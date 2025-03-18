#include <stdio.h>

int main(void)
{
    float weight, value;
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    scanf("%f", &weight);
    value = 21626 * weight * 14.5833;
    printf("Your weights in platinum is worth гд%.2f.\n", value);
    printf("You are easily worth it! If platinum prices drop, \n");
    printf("eat more to maintain your value.\n");
    return 0;
}