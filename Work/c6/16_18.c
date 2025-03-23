#include <stdio.h>
#define DUNBAR 150

int main(void)
{
    int friends = 5;
    int i = 1;
    while (friends <= DUNBAR)
    {
        friends -= i;
        friends *= 2;
        printf("Doctor Rabnud %-5dth week has %-5d friends\n",
               i, friends);
        i++;
    }
    return 0;
}