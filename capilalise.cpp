#include <stdio.h>

int main()
  {
  	char name[10];
  	int i,j;
	int count = 0;
  	printf("enter your name: ");
  	scanf("%s", name);
  	for (i=0;i<10;i++)
  	 {
  	 	if (name[i] != '\0')
  	 	  {
  	 	  	count++;
			 }
	   }
  	for (i=0;i<=count;i++)
  	  { 
  	    int k,j = 0;
  	  	j = ("%d ", name[i]);
			if (j>=0)
			  {
			  	k = j + 32;
			  	printf("%c",k);
				  }	
      }
    
    }
