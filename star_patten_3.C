#include <stdio.h>

int main()
   {
    int num = 5,data = 5,col = 0;

    while (num <= data && num > 0)
    {
      for (col = num ; col <= num && col > 0 ; col--)
         {
            printf("*");
         }
         printf("\n");
         num--;
   }
   }