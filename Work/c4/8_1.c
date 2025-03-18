#include <stdio.h>

int main(void)
{
    char first_name[20];
    char second_name[20];
    printf("Please enter your name: ");
    scanf("%s%s", first_name, second_name);
    printf("Your name is %s,%s\n", first_name, second_name);

    return 0;
}