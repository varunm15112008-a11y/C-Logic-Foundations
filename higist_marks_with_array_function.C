#include <stdio.h>

int getHighestmark(int marks[5])
  { 
    int i;
    int max = marks[0];
    for (i=0;i<5;i++)
       {
        if (max<marks[i])
           {
            max = marks[i];
           }
       }
       return max;

  }

int main()
 {
    int studentmarks[5],i;
    printf("enter student marks: ");
    for (i=0;i<5;i++)
      {
        scanf("%d", &studentmarks[i]);
      }
    int bestscore = getHighestmark(studentmarks);
    printf("%d",bestscore);
    
 }