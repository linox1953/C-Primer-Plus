#include <stdio.h>

int main(void)
{
    int n = 4, m = 5;
    float f = 7.0f, g = 8.0f;

    // �ڲ�ͬƽ̨�µĽ������ͬ
    printf("%d\n", n, m); //4
    printf("%d %d %d\n", n); // 4 761026880 6414928   
    printf("%d %d", f, g); // 0 0  ��ֵ������ת��Ϊint
    return 0;
}