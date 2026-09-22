#include <stdio.h>
#include <stdlib.h>

void allocateMemory(int **ptrRef) {
    *ptrRef = (int *)malloc(sizeof(int)); 
    **ptrRef = 42; 
}

int main() {
    int *myPtr = NULL; 

    printf("%p\n", (void*)myPtr);

    allocateMemory(&myPtr); 

    printf("%p\n", (void*)myPtr);
    printf("%d\n", *myPtr);

    free(myPtr); 

    return 0;
}
