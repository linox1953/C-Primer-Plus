#include <stdio.h>

int main(void)
{
    double nums1[8], nums2[8];
    double num_input;
    double sum;
    int i, j;
    printf("Enter eight numbers: ");
    for (i = 0; i < 8; i++)
    {
        scanf("%lf", &num_input);
        nums1[i] = num_input;
    }

    for (i = 0; i < 8; i++)
    {
        sum = 0.0;
        for (j = 0; j <= i; j++)
            sum += nums1[j];
        nums2[i] = sum;
    }

    for (i = 0; i < 8; i++)
    {
        printf("%-7.2f", nums1[i]);
    }

    printf("\n");

    for (i = 0; i < 8; i++)
    {
        printf("%-7.2f", nums2[i]);
    }

    return 0;
}