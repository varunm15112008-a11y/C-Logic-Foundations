#include <stdio.h>

int main()
 {
 	int num = 0,a = 0,b = 1,next = 0,c = 0;
 	printf("enter the value of num: ");
 	scanf("%d",&num);
 	for (c = 0 ; c <= num ; c++	)
 	  {  next = a + b;
 	     printf("%d ",a);
		a = b;
		b = next;
		
	   }
	    
 }
