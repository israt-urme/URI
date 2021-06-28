#include<stdio.h>
int main()
{
    int a,n,i;
    int sum=0;
    scanf("%d",&a);
    for(;;){
        scanf("%d",&n);
        if(n<0 || n==0)
            continue;
        else
            break;
    }
    for(i=1;i<=n;i++){
        sum=sum+a;
        a++;
    }
    printf("%d\n",sum);
    return 0;
}

