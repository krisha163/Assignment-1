#include <stdio.h>

int main() {
    float L, area, perimeter;

    // Input side length
    printf("Enter the length of the square: ");
    scanf("%f", &L);

    // Calculations
    area = L * L;
    perimeter = 4 * L;

    // Output results
    printf("Area of square = %.2f\n", area);
    printf("Perimeter of square = %.2f\n", perimeter);

    return 0;
}
