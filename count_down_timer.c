#include <stdio.h>
#include<stdlib.h>


int main() 
{

  int hh,mm,ss,i,j,z,k;

    printf("Enter the value for HH:");
    scanf("%d",&hh);
    printf("Enter the value for MM:");
    scanf("%d",&mm);
    printf("Enter the value for SS:");
    scanf("%d",&ss);
    i=hh;
    j=mm;
    z=ss;
    k=0;
    system("cls"); 
   for(;i>=0;i--)
       {
           for(;j>=0;j--)
               {
                   for(;z>=0;z--)
                       {
                          printf("\n%d:%d:%d",i,j,z); 
                          k++;
                          for(int d=15000;d>0;d--)
                          for(int e=15000;e>0;e--);
                           system("cls"); 
                       }
                       if(k==0)
                       {
                        j++;
                        i++;
                       }
                       if(j>0&&k!=0 )
                       z=z+60;
                   
                   
               }
               if(i>0&&k!=0)
               j=j+60;
       }
    
    
}
