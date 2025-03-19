#include <stdio.h>

int main(void)
{
    int n1, n2;
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &n2);
    printf("Next enter the first operand(<=0 to quit): ");
    scanf("%d", &n1);
    while (n1 > 0)
    {
        printf("%d %% %d = %d\n", n1, n2, n1 % n2);
        printf("Enter the next first number(<=0 to quit): ");
        scanf("%d", &n1);
    }
    printf("Done!");
    return 0;
}