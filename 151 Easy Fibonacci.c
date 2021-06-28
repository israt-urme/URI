#include<stdio.h>
int main()
{
    int n,i,sum;
    int f=-1,s=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=f;
        f=s;
        s=sum+f;
        if(i==n)
            printf("%d\n",s);
        else
            printf("%d ",s);
    }
    return 0;
}
