#include <stdio.h>
#define SR 0.1
#define CR 0.05

int main(void)
{
   double balance1 = 1000000;
   double balance1_rate = 0;
   double balance2 = 1000000;
   int years = 0;

   while (balance1 + balance1_rate >= balance2)
   {
       balance1_rate += balance1 * SR;
       balance2 += balance2 * CR;
       years++;
   }

   printf("Need %d years", years);
   return 0;
}