#include <stdio.h>

int main(void)
{
    char name[40];
    int a;
    printf("�������ͥ������: _______\b\b\b\b\b\b\b");
    scanf("%s", name);
    printf("The %s family has may be $%.2f richer\n", name, 33355.2834);
    a = (2, 3), a + 1;
    printf("%d", a);
    printf("Hello");
    return 0;
}