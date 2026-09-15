#include <stdio.h>

int main() 
{
    int data[] = {0, 5, 0, 8, 3, 0, 9};
    int  length = sizeof(data) / sizeof(data[0]);
    int n = 7;
    int write_index = 0;
    int count=0;

   
    for (int i = 0; i < n; i++) 
    {
        if (data[i] != 0) 
        {
            data[write_index] = data[i];
            write_index++; 
        }
        if (data[i]==0)
        {
            count=count+1;
        }
    }
    for (int i=1;i<=count;i++)
    {
        data[length-i]=0;
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    
    return 0;
}
