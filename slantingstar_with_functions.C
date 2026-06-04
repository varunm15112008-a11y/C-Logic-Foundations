#include <stdio.h>

void buildWall(int height)
 {
  int row,num;
  for (row = 1 ; row <= height ; row++)
    {
        for (num = 1 ; num <= row ; num++)
          {
            printf(" ");
          }
        printf("*");
        printf("\n");
    } 
 }

 int main()
 {  
    int height;
    printf("How tall should the wall be: ");
    scanf("%d", &height);
    buildWall(height);
    return 0;
 }