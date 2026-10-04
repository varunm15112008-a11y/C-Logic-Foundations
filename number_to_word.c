#include <stdio.h>

int main()
{
	int i,k,num,data;
	int arr[4]={0,0,0,0};
	char ones[][8]   = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "};
	char tens[][10]  = {"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "};
	char teens[][20] = {"ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "};

	printf("Enter number (0-9999): ");
	scanf("%d",&num);

	if (num==0)
	{
		printf("zero\n");
		return 0;
	}

	if (num<0 || num>9999)
	{
		printf("Limit is 0 to 9999\n");
		return 0;
	}

	data=num;
	for (i=3;i>=0;i--)
	{
		arr[i]=data%10;
		data=data/10;
	}

	if (arr[0]!=0)
	{
		for (k=0;k<=9;k++)
		{
			if (arr[0]==k)
			{
				printf("%s",ones[k]);
			}
		}
		printf("thousand ");
	}

	if (arr[1]!=0)
	{
		for (k=0;k<=9;k++)
		{
			if (arr[1]==k)
			{
				printf("%s",ones[k]);
			}
		}
		printf("hundred ");
	}

	if (arr[2]==1)
	{
		for (k=0;k<=9;k++)
		{
			if (arr[3]==k)
			{
				printf("%s",teens[k]);
			}
		}
	}
	else
	{
		for (k=0;k<=9;k++)
		{
			if (arr[2]==k)
			{
				printf("%s",tens[k]);
			}
		}
		for (k=0;k<=9;k++)
		{
			if (arr[3]==k)
			{
				printf("%s",ones[k]);
			}
		}
	}

	printf("\n");
	return 0;
}
