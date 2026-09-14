#include <stdio.h>


int stringLength(char *str) {
    
    if (*str == '\0') {
        return 0;
    }
   
    else {
        return 1 + stringLength(str + 1);
    }
}

int main() {
    char myText[] = "Hello";
    int length = stringLength(myText);
    
    printf("The length of \"%s\" is %d\n", myText, length);
    return 0;
}
