#include <stdio.h>
#include <float.h>

int main(void)
{
    double d1 = 1.0 / 3.0;
    float d2 = 1.0 / 3.0;
    printf("%.6f %.6f\n", d1, d2);
    printf("%.12f %.12f\n", d1, d2);
    printf("%.16f %.16f\n", d1, d2);
    printf("%d %d", DBL_DIG, FLT_DIG);
    return 0;
}