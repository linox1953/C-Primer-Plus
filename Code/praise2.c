#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being." 

int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("%s, %s\n", name, PRAISE);

    printf("��������� %zd ���ַ�,ռ�� %zd �ֽڿռ�\n", 
    strlen(name), sizeof(name));

    printf("PRAIZE�� %zd ���ַ�,ռ�� %zd ���ֽ�\n", 
    strlen(PRAISE), sizeof PRAISE); // sizeof �������������ʱ,����ҪԲ����

    return 0;
}