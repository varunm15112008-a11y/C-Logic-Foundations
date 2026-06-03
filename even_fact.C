#include <stdio.h>


int getvalue(int num = 0)
  {
  	printf("enter the value of num: ");
  	scanf("%d",&num);
  	return num;
  }
  
void even_number(int num)
  {
  	if (num % 2 == 0)
  	 {
  	 	printf("even number");
	   }
	else
	   {
	   	printf("odd number\n");
	   }
  }
void fact(int num)
   {
   	if (num % 2 != 0)
   	   {
   	   	int data,fact1 = 1;
   	   	for (data = 1 ; data <= num ; data++)
   	   	{
   	   	   fact1 = fact1 * data;
   	   }
   	   	   printf("%d\n",fact1);
		  
	    }
   }
   
   
int main()
  {
  	int num = getvalue();
  	even_number(num);
  	fact(num);
  }
