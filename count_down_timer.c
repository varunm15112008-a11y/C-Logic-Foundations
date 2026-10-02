#include <stdio.h>
#include <stdlib.h>
int main()
{

int hh,mm,ss,i,j,z,k,count,temp;

    printf("Enter the value for HH:");
    scanf("%d",&hh);
    while(1)
    {
    if (hh>24 || hh<0)
    {
    	printf("Hour out of range!!!!\n");
		printf("Enter the value for HH: ");
		scanf("%d",&hh);
	}
	else
	{
		break;
	}
}
    printf("Enter the value for MM:");
    scanf("%d",&mm);
     while(1)
    {
    if (mm>59 || mm<0)
    {
    	printf("Minutes out of range!!!!\n");
		printf("Enter the value for MM: ");
		scanf("%d",&mm);
	}
	else
	{
		break;
	}
	}
    printf("Enter the value for SS:");
    scanf("%d",&ss);
     while(1)
    {
    if (ss>59 || ss<0)
    {
    	printf("Seconds out of range!!!!\n");
		printf("Enter the value for SS: ");
		scanf("%d",&ss);
	}
	else
	{
		break;
	}
	}
	
	for (i=hh;i>=0;i--)
	{
		for (j=mm;j>=0;j--)
		{
			for (k=ss;k>=0;k--)
			{
				printf("%d : %d : %d",i,j,k);
				for(int d=15000;d>0;d--)
                    for(int e=15000;e>0;e--);
                system("cls");
                if (i == 0 && j == 0 && k == 0)
				{
                    printf("\nXXXXXXXX Time up XXXXXXXXXX\n");
                }
		
			}
			ss=59;
		}
		mm=59;
	}
	
	
}

