#include <stdio.h>
int main()
{
    int i,n,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
    int sum=0,sum1=0;
        for(;;){
            if(x%2!=0){
                sum=sum+x;
                sum1++;
            }
            x++;
            if(sum1==y)break;
        }
        printf("%d\n",sum);
    }
    return 0;
}

