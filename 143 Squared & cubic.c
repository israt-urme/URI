#include<stdio.h>
int main()
{
    int x,i,j;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=1;j++){
        printf("%d ",i);
        }
        for(j=1;j<=1;j++){
        printf("%d ",i*i);
        }
        for(j=1;j<=1;j++){
        printf("%d",i*i*i);
        }
        printf("\n");
    }
    return 0;
}

