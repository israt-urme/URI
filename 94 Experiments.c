#include<stdio.h>
int main()
{
    int n,b,i;
    char a;
    int s=0,s1=0,s2=0;
    float x,y,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %c",&b,&a);
        if(a=='C'){
            s=s+b;}
        if(a=='R')
            s1=s1+b;
        if(a=='S')
            s2=s2+b;
    }
    x=(s*100.0)/(s+s1+s2);
    y=(s1*100.0)/(s+s1+s2);
    z=(s2*100.0)/(s+s1+s2);
    printf("Total: %d cobaias\n",s+s1+s2);
    printf("Total de coelhos: %d\n",s);
    printf("Total de ratos: %d\n",s1);
    printf("Total de sapos: %d\n",s2);
    printf("Percentual de coelhos: %.2f %%\n",x);
    printf("Percentual de ratos: %.2f %%\n",y);
    printf("Percentual de sapos: %.2f %%\n",z);

    return 0;
}


