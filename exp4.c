#include <stdio.h>   // For input and output functions

int main()
{
    float radius, area, circumference;

    // Taking radius as input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculations
    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;

    // Displaying results
    printf("\nArea of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
