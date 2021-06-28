#include<stdio.h>
int main()
{
    float x,sum=0,sum1=0;
    for(;;){
        scanf("%f",&x);
        if(0<=x && x<=10){
            sum=sum+x;
            sum1=sum1+1;}
        else
            printf("nota invalida\n");
        if(sum1==2)
            break;
    }
    printf("media = %.2f\n",sum/sum1);
    return 0;
}
