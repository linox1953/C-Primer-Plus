#include <stdio.h>

int main(void)
{
    float inchs, centimeters;
    printf("������������(Ӣ��):");
    scanf("%f", &inchs);
    centimeters = inchs * 2.54;
    printf("��������: %.2f ����\n", centimeters);
    return 0;
}