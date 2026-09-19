#include <stdio.h>

int sumRange(int *start, int *end) 
{
    int total = 0;
    while(start<=end)
    {
        total = total+*(start);
        start++;
    }

    return total;
}

int main() 
{
    int data[] = {10, 20, 30, 40, 50, 60, 70};

    int result = sumRange(&data[0], &data[4]); 
    
    printf("Sum of range: %d\n", result); 
    return 0;
}
