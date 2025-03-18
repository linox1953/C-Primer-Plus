#include <stdio.h>

int main(void)
{
    float inchs, centimeters;
    printf("请输入你的身高(英寸):");
    scanf("%f", &inchs);
    centimeters = inchs * 2.54;
    printf("你的身高是: %.2f 厘米\n", centimeters);
    return 0;
}