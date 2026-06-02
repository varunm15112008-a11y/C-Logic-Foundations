#include <stdio.h>

int main()
   { 
    int row1 = 0,num1 = 0,data1 = 0;

    for (row1 = 1 ; row1 <= 3 ; row1++ )
      {
        for (data1 = 1 ; data1 <= 3 - row1 ; data1++)
           {
            printf(" ");
           }
        for (num1 = 1 ; num1 <= 2*row1 - 1 ; num1++)
           {
            printf("*");
           }
        printf("\n");
        }
    
    int row = 3,num = 0,data = 0;

    for (row = 3; row > 0 ; row--)
       {
        for (data = 1 ; data <= 3 - row ; data++ )
          {
            printf(" ");
          }
        for (num = 1 ; num <= 2*row - 1 ; num++)
          {
            printf("*");
          }
        printf("\n");
        
       }
   }