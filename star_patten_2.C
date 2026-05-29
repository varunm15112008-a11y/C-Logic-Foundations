#include <stdio.h>

int main()
    {
       int num = 0,data = 5,col = 0;

       while ( num <= data )
        {
            for ( col = 0 ; col <= num ; col++)
             {
                 printf("*");
             }
        
        printf("\n");
        num++;
        }
    }