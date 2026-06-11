/*
 * Module: Pointer Arithmetic Sandbox
 * Purpose: Testing direct memory address manipulation and pointer math (increment/decrement).
 * Note: Demonstrates how pointers jump by the byte size of their data type.
 */
 #include <stdio.h>
int main()
{
int m=5,n=10,o=0;
int *p1,*p2,*p3;
p1=&m;
p2=&n;
printf("p1 = %d\n",p1);
printf("p2 = %d\n",p2);
o=*p1+*p2;
printf("p1+p2 = %d\n",o);
o = *p1 -*p2;
printf("p1-p2 = %d\n",o);
p1++;
printf("p1++ = %d\n",p1);
p2--;
printf("p2--= %d\n",p2);
return 0;
}
