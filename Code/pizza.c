#include <stdio.h>
#define PI 3.14159

int main(void)
{
    float area, circum, radius;
    printf("������Բ�İ뾶: ____cm\b\b\b\b\b\b");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Բ����������:\n");
    printf("�ܳ� = %f cm, ��� = %f cm^2", circum, area);
    return 0;
}