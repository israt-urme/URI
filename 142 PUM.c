#include<stdio.h>
int main()
{
    int x,i,j;
    int sum=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=3;j++){
        sum++;
        printf("%d ",sum);
        }
        sum++;
        printf("PUM\n");
    }
    return 0;
}
