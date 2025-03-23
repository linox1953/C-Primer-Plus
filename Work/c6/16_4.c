#include <stdio.h>

int main(void)
{
    int i, j;
    int h = 65;
    
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < i; j++, h++)
            printf("%c", h);
        printf("\n");
    }
    
    return 0;
}