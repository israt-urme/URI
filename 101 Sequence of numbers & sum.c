#include<stdio.h>
int main(){
    int x,y,n,i,j,temp,sum;
    for(;;){
        scanf("%d %d",&x,&y);
        if(y>x){
            temp=x;
            x=y;
            y=temp;
        }
        if(x<=0 || y<=0)
            break;
        sum=0;
        for(j=y;j<=x;j++){
            sum=sum+j;
            printf("%d ",j);
        }
    printf("Sum=%d\n",sum);
    }
    return 0;
}
