#include <stdio.h>

int main()
{
    int row = 0,col = 0,num = 0;

    for (row = 1 ; row <= 6 ; row++)
     {
       int  num = 1;
       for (num = 1 ; row - 1 >= num ; num++)
         {
            printf(" ");
         }
        printf("*");
        printf("\n");
     }
}