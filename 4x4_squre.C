#include <stdio.h>

int main()
   {

    int num = 1,data = 4,col = 0;

    while (num <= data)
      {
        for (col = 1 ; col <= data ; col++)
           {
            printf("%d",col);
           }
        printf("\n");
        num++;
      }
    }