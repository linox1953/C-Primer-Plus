#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch[255];
    int i, index = 0;
    printf("Enter some words: ");
    scanf("%c", &ch[index]);
    while (ch[index] != '\n') // 用户按下Enter 键时,scanf会生成一个换行字符(\n)
    {
        index++;
        scanf("%c", &ch[index]);
    }

    for (i = --index; i >= 0; i--)
        printf("%c", ch[i]);
    return 0;
}