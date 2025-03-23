#include <stdio.h>
#define CHJ 70

int main(void)
{
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = CHJ; j >= CHJ - i; j--)
            printf("%c", j);
        printf("\n");
    }
    return 0;
}