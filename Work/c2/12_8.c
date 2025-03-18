#include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
    printf("strarting now:\n");
    one_three();
    two();
    printf("three\n");
    printf("done!\n");
}

void one_three(void)
{
    printf("one\n");
}

void two(void)
{
    printf("two\n");
}