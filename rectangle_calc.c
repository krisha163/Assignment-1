#include <stdio.h>

int main() {
    float L, B, area, perimeter;

    // Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%f", &L);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &B);

    // Calculations
    area = L * B;
    perimeter = 2 * (L + B);

    // Output results
    printf("Area of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}
