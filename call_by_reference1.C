#include <stdio.h > 

void Call (int *);
int main()
{
int bal=100;
printf("in main function before calling bal is %d\n",bal);
Call (&bal);
printf ("in main function after calling bal is %d\n",bal);
}

void Call (int *p)
{
printf("in subfunction before modifying *p is %d\n",*p);
*p=30;
printf("in subfunction after modifying *p is %d\n",p);
}
