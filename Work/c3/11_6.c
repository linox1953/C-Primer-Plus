#include <stdio.h>
#include <limits.h>

int main(void)
{
    float quarts;
    float h2os;
    printf("������ˮ�Ŀ�����:");
    scanf("%f", &quarts);
    h2os = quarts * 950 / 3.0e-23;
    printf("ˮ���ӵ�����Ϊ:%f\n", h2os);
    return 0;
}