#include <stdio.h>

int main(void)
{
    float a, b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    // 超出float的精度
    printf("%f\n", a);
    return 0;
}