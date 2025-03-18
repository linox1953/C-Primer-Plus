#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[20], second_name[20];
    printf("Enter your first name:");
    scanf("%s", first_name);
    printf("Enter your second name:");
    scanf("%s", second_name);
    printf("%s %s\n", first_name, second_name);
    printf("%*d %*d\n",
           strlen(first_name), strlen(first_name), 
           strlen(second_name), strlen(second_name));
    printf("%s %s\n", first_name, second_name);
    printf("%-*d %-*d\n",
           strlen(first_name), strlen(first_name), 
           strlen(second_name), strlen(second_name));
    return 0;
}