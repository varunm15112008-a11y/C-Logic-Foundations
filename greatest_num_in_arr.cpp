#include <stdio.h>

int main()
 {
 	int arr[6],i,hig = 0,hig1 = 0;
 	printf("enter the value of arr: ");
 	for (i = 0 ; i < 6 ; i++)
 	 {
 	 	scanf("%d", &arr);
	  }
	for (i = 1 ; i <= 5 ; i++)
	  {
	  	if (arr[i-1] < arr[i+1])
	  	  {
	  	  	hig = arr[i+1];
			}
		else 
		{
			hig = arr[i-1];
		}
	  }
	for (i = 1 ; i <= 5 ; i++)
	  {
	  	if (hig < arr[i+1])
	  	  {
	  	  	hig1 = arr[i + 1];
			}
		else 
		  {
		  	hig1 = hig;
		  }
	  }
	  printf("%d",hig1);
	  
 }
