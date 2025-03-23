#include <stdio.h>
#define CHA 65

int main(void)
{
    char n;
    int diff;
    int i, j;
    printf("Enter a character: ");
    scanf("%c", &n);
    diff = n - CHA;
    for (i = 0; i <= diff; i++)
    {
        for (j = 0; j < diff - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c", j + CHA);
        }
        for (j = i; j > 0; j--)
        {
            printf("%c", CHA + j - 1);
        }
        printf("\n");
    }
    return 0;
}