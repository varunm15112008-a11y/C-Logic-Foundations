#include <stdio.h>

int main()
{
	int arr[6],i;
	int signed sum = 0;
	printf("enter the value of arr: ");
	for (i = 0 ; i < 6 ; i++)
	  {
	  	scanf("%d", &arr[i]);
	  }
	for (i = 0 ; i < 6 ; i++ )
	 {
	 	if ( (i+1) % 3 == 0)
	 	 {
	 	 	sum = sum - arr[i];
		  }
		else
		   {
		   	sum = sum + arr[i];
		   }
	 }
	printf("%d", sum);								
}
