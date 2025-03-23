#include <stdio.h>

void up_and_down(int i)
{
    printf("The address for %d is %p\n", i, &i);
    if (i < 4)
        up_and_down(i + 1);
    printf("The address for %d is %p\n", i, &i);
}

int main(){
    up_and_down(1);
    return 0;
}
