#include<stdio.h>

int main() {
    int dollar;
    int rupees;
     
    printf("enter dollar value :");
    scanf("%d",&dollar);

    rupees = dollar*45;

    printf("%d dollar = %d rupees",dollar,rupees);

    return 0;
    
}