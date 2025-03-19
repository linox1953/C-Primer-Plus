#include <stdio.h>
#define DIW 7

int main(void)
{
    int days_input;
    int weeks, days;
    printf("Enter the days: ");
    scanf("%d", &days_input);
    printf("%d days equal to %d weeks and %d days\n",
           days_input, days_input / DIW, days_input % DIW);
    return 0;
}