#include <stdio.h>

int main()
 {
    int correctPin = 7777,num = 0,num1 = 1,data = 0;
    int pass = 0;

    do
    {
      printf("enter your 4-digit PIN: ");
      scanf("%d", &pass);
    
      if (pass == 7777)
        {
            printf("Access Graned\n");
        }
      else
       {
          for (num = 1 ; correctPin != pass && num <= 3 ; num++) 
            {
             printf("incorrect PIN\n");
            if (num <= 3)
            {
             printf("enter your 4-digit PIN: ");
             scanf("%d",&pass);
             data = data + 1;
            
                if (pass == 7777)
                {
                  printf("\nAccess Graned\n");
                }
            }    
            }
        }
    }

    while(num1 == 7);

    if ((data > 3) || (num == 4))
    {
    printf("Account Locked");
    }
}