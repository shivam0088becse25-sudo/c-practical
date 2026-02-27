#include <stdio.h>   // Standard Input Output header file

int main()   // Main function - program execution starts here
{
    // Variable declaration
    int rollNo;
    float marks;
    char grade;

    // Output statement using printf()
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);   // Input integer

    printf("Enter Marks: ");
    scanf("%f", &marks);    // Input float

    printf("Enter Grade: ");
    scanf(" %c", &grade);   // Input character (space before %c avoids newline issue)

    // Output displaying entered values
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", rollNo);
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);

    return 0;   // End of program
}
