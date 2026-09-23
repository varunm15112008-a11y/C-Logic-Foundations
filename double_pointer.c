#include <stdio.h>
#include <string.h>


void setLongest(char *w1, char *w2, char **winner) 
{

    size_t lenth = strlen(w1);
    size_t lenth1 = strlen(w2);
    if (lenth>lenth1)
    {
        *winner = w1;
    }
    else
    {
        *winner = w2;
    }
}

int main() 
{
    char *word1 = "Python";
    char *word2 = "C";
    
    
    char *longest = NULL; 

    
    setLongest(word1, word2, &longest);

    
    printf("The longest word is: %s\n", longest); 
    
    return 0;
}
