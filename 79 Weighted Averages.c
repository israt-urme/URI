#include<stdio.h>
int main()
{
    int n,i;
    float a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%f %f %f",&a,&b,&c);
        printf("%.1f\n",(a*2.0+b*3.0+c*5.0)/10.0);
    }
    return 0;
}
