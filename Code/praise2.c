#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being." 

int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("%s, %s\n", name, PRAISE);

    printf("你的名字有 %zd 个字符,占据 %zd 字节空间\n", 
    strlen(name), sizeof(name));

    printf("PRAIZE有 %zd 个字符,占据 %zd 个字节\n", 
    strlen(PRAISE), sizeof PRAISE); // sizeof 运算对象是类型时,必须要圆括号

    return 0;
}