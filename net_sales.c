#include<stdio.h>

int main(){
    float gross,discount,net;

    printf("enter gross value:");
    scanf("%f",&gross);

    discount=0.10*gross;
    net=gross-discount;

    printf("%fis net sale",net);

    return 0;


}