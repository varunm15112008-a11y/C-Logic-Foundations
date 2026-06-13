#include <stdio.h>

void add(int *a,int *b)
 {
 	*a = *a + *b;
 	printf("a + b = %d\n",*a);
 }
 
int main()
{
	int m = 10,n = 30;
	add(&m,&n);
	printf("%d",m);
	return 0;
}

