#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Enter an integer: ");
    scanf("%d", &n);
    m = n + 10;
    while (n <= m)
    {
        printf("%d\n", n);
        n++;
    }
    
    return 0;
}