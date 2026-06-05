#include <stdio.h>

int main()
 {
 	int arr[6],i,add = 0;
	int signed sub = 0;
 	printf("enter the value of arr: ");
 	for (i = 0 ; i < 6 ; i++)
 	  {
 	  	scanf("%d", &arr[i]);
	   }
	for (i = 0 ; i < 5 ; i++)
	   {
	   	if ( (i+1) % 2 != 0 )
	   	  {
			 add = arr[i] + arr[i + 1];
			 printf("%d ",add);
		}
		else 
		  {
		  	sub = arr[i] - arr[i+1];
		  	printf("%d ",sub);
		  }
	   }
 }
