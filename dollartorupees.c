#include<stdio.h>

int main() {
    int dollar;
    int rupees;
     
    printf("enter rupees value :");
    scanf("%d",&rupees);

    dollar = rupees/45;

    printf("%d rupees = %d dollars",rupees,dollar);

    return 0;
    
}