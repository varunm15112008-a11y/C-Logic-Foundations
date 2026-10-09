#include <stdio.h>

int main()
{
    int patientID, ageInt;
    char gender;
    char ch;
    float weight;
    double roomChargePerDay;
    int daysAdmitted;
    double totalRoomBill;

    printf("Enter Patient ID : ");
    scanf("%d", &patientID);

    // Remove newline left by scanf()
    while (getchar() != '\n');

    printf("Enter Patient Name : ");

    // Read and display name using getchar() and putchar()
    while ((ch = getchar()) != '\n')
    {
        putchar(ch);
    }

    printf("\nEnter Gender (M/F) : ");
    scanf(" %c", &gender);

    printf("Enter Age : ");
    scanf("%d", &ageInt);

    printf("Enter Weight (kg) : ");
    scanf("%f", &weight);

    printf("Enter Room Charge per Day : ");
    scanf("%lf", &roomChargePerDay);

    printf("Enter Number of Days Admitted : ");
    scanf("%d", &daysAdmitted);

    // Typecasting int to double
    totalRoomBill = roomChargePerDay * (double)daysAdmitted;

    printf("\n========= PATIENT REGISTRATION RECORD =========\n");
    printf("Patient ID       : %d\n", patientID);

    printf("Patient Name     : ");
    
    /*
       Cannot display the name here again because
       it was not stored in an array.
    */

    printf("\nGender           : %c\n", gender);
    printf("Age              : %d years\n", ageInt);
    printf("Weight           : %.1f kg\n", weight);
    printf("Days Admitted    : %d\n", daysAdmitted);
    printf("Total Room Bill  : Rs. %.2lf\n", totalRoomBill);

    return 0;
}

