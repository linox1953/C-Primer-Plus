#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int count = 0;
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if (isgraph(ch))
            count++;
    }
    printf("%d", count);
    return 0;
}