#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();
}

void jolly(void)
{
    printf("For he's a Jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}