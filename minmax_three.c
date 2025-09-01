#include<stdio.h>

int main(){

    int a,b;
    printf("enter two number:");
    scanf("%d %d",&a,&b);

    if(a>b){
        printf("largest=%d\n",a);
         printf("smallest=%d\n",b);
        }else if (b>a)
        {
             printf("largest=%d\n",b);
              printf("smallest=%d\n",a);
        }else{
            printf("both values are equal:%d\n",a);
        }
        return 0;
    }
