#include <stdio.h>


void printWelcome() {
    printf("==================================\n");
    printf("=   ULTIMATE MULTIPLIER v1.0     =\n");
    printf("==================================\n");
}


int getUserInput() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
int multiplyNumbers(int a, int b)
{
    return a * b;
}

void displayResult(int finalAnswer)
{
    printf("The final calculation is: %d\n", finalAnswer);
}

int main() {
    
    printWelcome();
    
    
    int num1 = getUserInput();
    int num2 = getUserInput();
    
    
    
    int product = multiplyNumbers(num1, num2);
    
    
    displayResult(product);
    
    return 0;
}
