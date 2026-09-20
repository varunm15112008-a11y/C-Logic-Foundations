#include <stdio.h>

int main() {
  
    int num = 100;
    
   
    int *ptr = &num;
    
  
    int **d_ptr = &ptr;
    

   
    printf("--- Accessing Values ---\n");
    printf("Value of num directly                 = %d\n", num);
    printf("Value of num using single pointer (*ptr)  = %d\n", *ptr);
    printf("Value of num using double pointer (**d_ptr) = %d\n\n", **d_ptr);

    
    printf("--- Memory Addresses ---\n");
    printf("Address of num (&num)                 = %p\n", (void*)&num);
    printf("Address stored inside ptr (ptr)       = %p\n", (void*)ptr);
    printf("Address of ptr itself (&ptr)          = %p\n", (void*)&ptr);
    printf("Address stored inside d_ptr (d_ptr)   = %p\n", (void*)d_ptr);

    return 0;
}
