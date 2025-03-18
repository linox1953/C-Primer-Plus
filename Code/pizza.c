#include <stdio.h>
#define PI 3.14159

int main(void)
{
    float area, circum, radius;
    printf("请输入圆的半径: ____cm\b\b\b\b\b\b");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("圆的数据如下:\n");
    printf("周长 = %f cm, 面积 = %f cm^2", circum, area);
    return 0;
}