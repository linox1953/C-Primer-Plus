#include <stdio.h>

void binary(int i)
{
    int digit;

    digit = i % 2;
    if (i >= 2)
        binary(i / 2);

    putchar(digit? '1':'0');
}

int main()
{
    int i;
    printf("Convert to binary.");
    printf("Enter a integer: ");
    scanf("%d", &i);
    binary(i);

    return 0;
}