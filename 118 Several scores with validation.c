#include<stdio.h>
int main()
{
    float x,sum=0,sum1=0;
    int a,i;
    for(;;)
    {
        for(;;)
        {
            scanf("%f",&x);
            if(0<=x && x<=10){
                sum=sum+x;
                sum1++;}
            else
                printf("nota invalida\n");
            if(sum1==2){
                printf("media = %.2f\n",sum/2.0);
                break;}
        }
        sum1=0;
        sum=0;
        for(;;)
        {
            scanf("%d",&a);
            printf("novo calculo (1-sim 2-nao)\n");
            if(a==1 || a==2)
                break;
        }
        if(a==1)
            continue;
        else
            break;
    }
    return 0;
}
