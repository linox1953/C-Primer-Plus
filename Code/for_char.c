#include <stdio.h>
int main(void)
{
    char ch;

    for (ch = 'A'; ch <= 'z'; ch++)
        printf("The ASCII value for %c is %d\n", ch, ch);
    return 0;
}