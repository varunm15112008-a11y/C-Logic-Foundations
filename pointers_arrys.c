#include <stdio.h>

int main() 
{
    double balance[5] = {10.0, 20.0, 30.0, 40.0, 50.0};
    double *p = balance;
    
    for(int i = 0; i < 5; i++) 
    {
       
    *(p + i) = *(p + i) * 2;
    printf("%lf\n",*(p+i));
        
    }
    
    
    printf("Updated Balances: \n");
    for(int i = 0; i < 5; i++) 
    {
        printf("%.1lf ", *(p + i));
    }
    
    return 0;
}
