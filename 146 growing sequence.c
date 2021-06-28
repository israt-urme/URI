#include<stdio.h>
int main()
{
    int x,i;
    int sum;
    for(;;){
        scanf("%d",&x);
        sum=0;
        for(i=1;i<=x;i++){
            sum++;
            if(sum<=x && i<x)
                printf("%d ",sum);
            if(sum<=x && i==x)
                printf("%d",sum);
        }
    if(x==0)
        break;
    printf("\n");
    }
    return 0;
}

