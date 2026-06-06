#include <stdio.h>

int main()
   {
   	int arr[5],i;
   	printf("enter the value of arr: ");
   	for (i=0;i<5;i++)
   	   {
   	   	scanf("%d", &arr[i]);
		  }
	int mid = arr[0],min,max;
	for (i=0;i<5;i++)
	  {
	  	if (mid > arr[i])
	  	 {
	  	 	max = mid;
	  	 	min = arr[i];
		   }
		else 
		 {
		 	min = mid;
		  }
		
		printf("%d",min);
	  }
	   
   }
