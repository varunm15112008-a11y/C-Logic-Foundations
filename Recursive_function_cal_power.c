#include <stdio.h>
#Recursive function to calculate power
int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base*power(base , exp-1);
}

int main()
{
    int num,data;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    printf("enter the value of Data: ");
    scanf("%d ",&data);
    printf("%d",power(num,data));
}
