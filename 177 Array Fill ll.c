#include<stdio.h>
int main()
{
    int n[100],j;
    double x,temp,a;
    scanf("%lf",&x);
    for(j=0;j<100;j++){
        printf("N[%d] = %.4lf\n",j,x);
        a=x/2;
        temp=a;
        a=x;
        x=temp;
    }
    return 0;
}

