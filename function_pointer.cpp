#include <stdio.h>

int subtraction(int a,int b)
{
return a-b;
}

int add(int a,int b)
{
return a+b;
}
int mul(int a,int b)
{
	return a*b;
}
int main()
{
int (*fp[3]) (int,int) = {subtraction,add,mul};
int result;
result=fp[0](5,4);
printf("Using function pointer we get the result: %d\n",result);
result=fp[1](5,4);
printf("Using function pointer we get the result: %d\n",result);
result=fp[2](5,4);
printf("using function pointer we get the result: %d\n",result);
return 0;
}
