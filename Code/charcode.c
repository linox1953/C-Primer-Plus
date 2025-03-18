#include <stdio.h>

int main(void)
{

    int i;
    while(i=0)
    {
        printf("%d", i);
    }
    while(1)
    {
        char ch;
        scanf("%c", &ch);
        printf("The code for %c is %d\n", ch, ch);
    }

    return 0;
}