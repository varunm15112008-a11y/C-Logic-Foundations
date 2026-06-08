#include <stdio.h>
#include <string.h>

int main()
   {
   	char name[10];
   	int i,j;
   	printf("enter your name: ");
   	scanf("%s", name);
   	j = ("%d",strlen(name));
   	for (i= 10 - j;i>=0;i--)
   	  {  
   	    printf("%s", name[i]);
   	    
   	  	 }
   	return 0;
    }