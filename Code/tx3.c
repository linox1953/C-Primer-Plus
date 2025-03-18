#include <stdio.h>

int main(void)
{
    float a = 0x5.b6p12;
    unsigned b = 0X3;
    unsigned c = 012;
    long double d = 2.9e05L;
    printf("%a\n", a);
    printf("%#X\n", b);
    printf("%#o\n", c);
    printf("%Le\n", d);

    return 0;
    
}