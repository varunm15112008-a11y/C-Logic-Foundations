#include <stdio.h>

int swap(int *p,int *r)
 {
 	int temp;
 	temp = *p;
 	*p = *r;
 	*r = temp;
 }
 
int main()
{
   int num1 = 10,data1 = 20;
   printf("num1 = %d    data1 = %d\n",num1,data1);
   swap(&num1,&data1);
   printf("num1 = %d    data1 = %d",num1,data1);
}

