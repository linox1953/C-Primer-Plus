#include <stdio.h>
#define CIF 30.48
#define CII 2.54

int main(void)
{
    float cm;
    printf("Enter your height in centimeters (<=0 to quit): ");
    scanf("%f", &cm);
    while (cm > 0) 
    {
        printf("%.1f cm = %.f feet = %.1f inches\n",
               cm, cm / CIF, cm / CII);
        printf("Enter your height in centimeters (<=0 to quit):");
        scanf("%f", &cm);
    }
    printf("bye");
    return 0;
}