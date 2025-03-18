#include <stdio.h>

int main(void)
{
    float speed, size;
    printf("Enter your speed and file size(seperate with blank):");
    scanf("%f%f", &speed, &size);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n",
    speed, size);
    printf("downloads in %.2f seconds.\n", size / speed);
    return 0;
}