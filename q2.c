#include <stdio.h>

void main()
   {

    int sum = 0,a = 1,b = 2,next = 0;

    while (b <= 4000000)
        {
         if (b % 2 == 0)
          {
            sum = sum + b;
          }
        next = a + b;
        a = b;
        b = next;
        }
    printf("%d",sum);
     
   }