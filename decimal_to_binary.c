#include <stdio.h>

void printBinary(int n)
{
    if (n==0)
    {
        return;
    }
    int rem,val,data;

    rem=n%2;
    data=n/2;
    
    printBinary(data);

    printf("%d", rem);
}

int main()
{
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    if (num == 0) {
        printf("0");
    } else {
        printBinary(num);
    }
    
    printf("\n");
    return 0;
}
