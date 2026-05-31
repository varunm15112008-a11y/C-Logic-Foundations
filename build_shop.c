#include <stdio.h>
#include <conio.h>
void main()
{      
    int id = 0,amount = 0,items = 0,final = 0;
    char rank,value;
    printf("enter your id: ");
    scanf("%d", &id);
    
    if (id == 777)
    {
        printf("enter your rank: ");
        scanf(" %c", &rank);
        if (rank == 's')
           {
           printf("p (Potion costs 500) or e (Elixir costs 1500)");
           scanf(" %c", &value);
           if (value == 'p')
            { printf("enter gold amount: ");
              scanf("%d", &amount);
              if (amount < 5000 && amount >= 500)
                 {
                    printf("How much potion you need(min 1 max 10): ");
                    scanf("%d", &items);
                    final = amount - (items * 500);
                    printf("balance %d",final);
                 }
               else 
               {  
                  printf("gold is more then 5000 or less than 500");
               }  
            }
            else if (value == 'e')
            {
                   printf("enter gold amount: ");
                   scanf("%d", &amount);
                    if (amount < 5000 && amount >= 1500)
                    {
                    printf("How much potion you need(min 1 max 3): ");
                    scanf("%d", &items);
                    final = amount - (items * 1500);
                    printf("balance %d",final);
                    }
                    else 
                    {
                        printf("gold is more than 5000 or less than 1500");
                    }
            }
        }                
         else 
         {
            printf("You are low rank hunter");
         }  
               
           
    }

    else 
       {
        printf("invalide id");
       }
}