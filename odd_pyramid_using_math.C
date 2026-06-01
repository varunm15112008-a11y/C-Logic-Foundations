#include <stdio.h>

int main()
{
    int row = 0,col = 0,num = 0,data = 0;

    for (row=1;row <= 5;row++)
        {
            for (num = 1 ; num <= 5 - row ; num++)
             {
                printf(" ");
             }
             for (data = 1 ; data <= (2*row - 1) ; data++ ) 
              {
                printf("*");
              }
            printf("\n");
        }
}