#include<stdio.h>

float gross,allowance, deduction, net;

int main(){

printf("enter a gross salary:");
scanf("%f",&gross);

allowance=0.10*gross;
deduction=0.03*gross;
net=gross+allowance-deduction;

printf("%f\n",net);

return 0;
}

