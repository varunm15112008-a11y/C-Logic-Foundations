#include <stdio.h>

int main()
  {
    int row = 0,num = 0,data = 0,col = 0;

    for (row = 1 ; row <= 5 ; row++)
       {
        for (num = 1 ; num <= row - 1 ; num++ )
         {
            printf(" ");
         }
        printf("*");

        for (data = 1 ; data <= 9 - 2*row ; data++)
        {
         printf(" ");
        }
        if (row < 5)
          {
            printf("*");
          }
        printf("\n");
       }
  }