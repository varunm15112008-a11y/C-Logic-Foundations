/*
 * Module: Memory Swap Engine
 * Purpose: Swapping two integer variables using pointer dereferencing (*t).
 * Note: Designed to minimize direct array copying by manipulating memory addresses.
 */
 #include <stdio.h>

int main()
{
	int *t;
	int num1=10,data1=20,temp;
	t = &temp;
	printf("num1 = %d",num1);
	printf(" data1 = %d\n",data1);
	if(1>0)
	  {
	    *t = num1;
	    num1 = data1;
	    data1 = *t;
	  }
	printf("num1 = %d",num1);
	printf(" data1 = %d",data1);
}
