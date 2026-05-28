#include <stdio.h>

void main()
  {
    int num = 0,data = 0,cod = 0;
    
    for (data = 0 ; data < 1000 ; data = data + 1)
      {   
        if ((data % 3 == 0 || data % 5 == 0))
          cod = cod + data;
      }

    printf("%d",cod);
  }