#include <stdio.h>

int main(void)
{
    int a, b;
    a, b = 3; // 常见错误，只给b赋值，并未给a赋值, 此时a为垃圾值
    printf("a=%d b=%d\n", a, b);

    // 正确写法
    int c = 3, d = 3;
    int e, f;
    e = 4, f = 5;
    printf("c=%d, d=%d, e=%d, f=%d\n", c, d, e, f);

    return 0;
}