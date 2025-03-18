#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned int un = 3000000000;
    short end = 200;
    long long big = 2147483648;
    long long verybig = 12345678908642;


    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %lld and not %d\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);

    return 0;
}