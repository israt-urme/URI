#include<stdio.h>
int main()
{
    float n,sum=0,sum1=0;
    for(;;){
        scanf("%f",&n);
        if(n<0)break;
        sum=sum+n;
        sum1++;
    }
    printf("%.2f\n",sum/sum1);
    return 0;

}
