#include <stdio.h>

int main(void)
{
    int n, m;
    printf("Enter the start and end: ");
    scanf("%d%d", &n, &m);
    while (n <= m)
    {
        printf("num = %-5d square = %-5d cube = %-5d\n",
               n, n * n, n * n * n);
        n++;
    }
    
    return 0;
}