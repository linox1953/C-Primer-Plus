#include <stdio.h>
#include <limits.h>

int main(void)
{
    float quarts;
    float h2os;
    printf("请输入水的夸脱数:");
    scanf("%f", &quarts);
    h2os = quarts * 950 / 3.0e-23;
    printf("水分子的数量为:%f\n", h2os);
    return 0;
}