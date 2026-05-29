#include <stdio.h>
int main()
    {
        int num = 0,data = 0,col = 0,row = 0;
        printf("enter the value of data: ");
        scanf("%d", &data);

        for (col = 0;col <= data;col++)
            {
                for (row = 0;row <= data;row++)
                  {
                    printf("*");
                  }
                printf("\n");
            }
    }

