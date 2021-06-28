#include<stdio.h>
int main()
{
    int n,x,i,in=0,out=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(10<=x && x<=20)
            in=in+1;
        else
            out=out+1;
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
