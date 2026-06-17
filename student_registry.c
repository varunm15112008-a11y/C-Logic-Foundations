#include <stdio.h>

// 1. Define the structure for a student record
struct classroom {
    char name[25];
    int roll;
    char gender;
};

int main() {   
    int num = 0;
    
    printf("=== Student Registry System ===\n");
    printf("Enter number of students to register: ");
    scanf("%d", &num);
    
    // Dynamically size the array based on user input
    struct classroom s[num];
    int i = 0;
    
    // 2. INPUT PHASE: Collect data for all students
    for (i = 0; i < num; i++) { 
        printf("\n------ Enter Information for Student %d ------\n", i + 1);
        
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        
        printf("Enter student roll number: ");
        scanf("%d", &s[i].roll);
        
        // Note: The space before %c is critical here to consume the leftover newline character
        printf("Enter student gender (M/F): ");
        scanf(" %c", &s[i].gender);
        
        printf("-------------- Data Saved -----------------\n");
    }
    
    // 3. OUTPUT PHASE: Display the collected database
    printf("\n\n=== Official Student Database ===\n");
    for (i = 0; i < num; i++) {  
        printf("\n[Data of Student %d]\n", i + 1);
        printf("Name   : %s\n", s[i].name);
        printf("Roll   : %d\n", s[i].roll);
        printf("Gender : %c\n", s[i].gender);
    }
    
    return 0;
}
