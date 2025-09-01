#include <stdio.h>

int main() {
    float dollars, rupees, pounds;

    // Input amount in dollars
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);

    // Convert dollars to rupees
    rupees = dollars * 48;

    // Convert rupees to pounds
    pounds = rupees / 70;

    // Display result
    printf("%.2f dollars = %.2f pounds\n", dollars, pounds);

    return 0;
}

