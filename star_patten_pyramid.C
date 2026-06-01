#include <stdio.h>

int main()
   {
    int row = 0,col = 0,num = 0,data = 0,sub = 0;
     for (row = 1 ; row <= 5 ; row++)
       {
    
            int num = 1;
            for (num = 1 ; num <= 5 - row ; num++)
             {
                printf(" ");
             }
             int sub = 0; 
             for (sub = 0 ; sub < row ; sub++)
                {
                    printf("* ");
                }
         
         printf("\n");
        }
   }