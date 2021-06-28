#include<stdio.h>
int main()
{
    int x,y,i;
    int sum=0;
    scanf("%d %d",&x,&y);
    for(;;){
        for(i=1;i<=x;i++){
            sum++;
            if(sum<=y && i<x)
                printf("%d ",sum);
            if(sum<=y && i==x)
                printf("%d",sum);
        }
    if(sum>y)
        break;
    printf("\n");
    }
    return 0;
}
