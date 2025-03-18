#include <stdio.h>

int main(void)
{
    int n = 4, m = 5;
    float f = 7.0f, g = 8.0f;

    // 在不同平台下的结果都不同
    printf("%d\n", n, m); //4
    printf("%d %d %d\n", n); // 4 761026880 6414928   
    printf("%d %d", f, g); // 0 0  其值并不会转换为int
    return 0;
}