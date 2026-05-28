#include <stdio.h>

int main()
  {
    int num = 0,data = 0;
    printf("enter the value of num: ");
    scanf("%d", &num);

    for ( data = num ; data >= 1; data = data - 1)
      {
        printf ("%d\n",data);
      }
      return 0;
  }