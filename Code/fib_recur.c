#include <stdio.h>

int fib(int i); 

int main()
{
    int num, res;
    printf("Enter a number: ");
    while (scanf("%d", &num) == 1){
        printf("The %dth number of fib is %d\n", num, fib(num));
        printf("Enter next number (q to quit): ");
        while (getchar() != '\n')
            continue;
    }
    return 0;
}

int fib(int i)
{
    if (i < 3)
        return 1;
    else
        return fib(i - 2) + fib(i - 1);
}
