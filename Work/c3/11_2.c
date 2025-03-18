#include <stdio.h>

int main(void)
{
    char ch;
    printf("请输入ascii码值:\n");
    scanf("%d", &ch);
    printf("%d对应的字符为%c\n", ch, ch);
    return 0;
}