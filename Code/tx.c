#include <stdio.h>

int main(void)
{
    int a, b;
    a, b = 3; // ��������ֻ��b��ֵ����δ��a��ֵ, ��ʱaΪ����ֵ
    printf("a=%d b=%d\n", a, b);

    // ��ȷд��
    int c = 3, d = 3;
    int e, f;
    e = 4, f = 5;
    printf("c=%d, d=%d, e=%d, f=%d\n", c, d, e, f);

    return 0;
}