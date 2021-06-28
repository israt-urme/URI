#include<stdio.h>
int main()
{
    int x,i;
    int sum=0,sum1=0,sum2=0;
    for(;;)
    {
        scanf("%d",&x);
        if(x==1){
            sum++;
        }
        if(x==2){
            sum1++;
        }
        if(x==3){
            sum2++;
        }
        if(x==4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",sum);
    printf("Gasolina: %d\n",sum1);
    printf("Diesel: %d\n",sum2);
    return 0;
}
