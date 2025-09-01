#include <stdio.h>

int main() {
    float m1, m2, m3, total, avg;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    if(m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result: Fail\n");
        return 0;
    }

    total = m1 + m2 + m3;
    avg = total / 3;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", avg);

    if(avg >= 70)
        printf("Grade: Distinction\n");
    else if(avg >= 60)
        printf("Grade: First\n");
    else if(avg >= 50)
        printf("Grade: Second\n");
    else if(avg >= 35)
        printf("Grade: Third Class\n");
    else
        printf("Result: Fail\n");

    return 0;
}
