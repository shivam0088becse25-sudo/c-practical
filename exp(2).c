#include <stdio.h>   // For printf() and scanf()

int main()
{
    int a, b;

    // Taking input
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // Display before swapping
    printf("\nBefore Swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swapping without temporary variable (using arithmetic)
    a = a + b;
    b = a - b;
    a = a - b;

    // Display after swapping
    printf("\nAfter Swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
