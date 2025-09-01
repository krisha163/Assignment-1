#include<stdio.h>

int main(){
    float minute;
    float hour;

    printf("enter a minute : ");
    scanf("%f",&minute);

    hour = minute/60;

    printf("%fhour=%fminute\n",hour,minute);

    return 0;

}