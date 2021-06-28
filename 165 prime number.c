#include<stdio.h>
int main()
{
    int n,i,x,j,flag;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        flag=1;
        for(j=2;j<=x/2;j++){
            if((x%j)==0)
                flag=0;
        }
        if(flag==1)
            printf("%d eh primo\n",x);
        else
            printf("%d nao eh primo\n",x);
    }
    return 0;
}
