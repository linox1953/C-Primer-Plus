#include <stdio.h>
#define PAGES 959

int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES); // - �����
    printf("*%0-10d*\n", PAGES); // ���� 0
    printf("*%010d*\n", PAGES); // ʹ��0���
    printf("*%010.2f*", 3.4);

    return 0;
}