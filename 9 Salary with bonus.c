#include<stdio.h>
int main()
{
    char c[10];
    double a,b,s;
    scanf("%s %lf %lf",c,&a,&b);
    s=(b*15)/100.0+a;
    printf("TOTAL = R$ %.2lf\n",s);
    return 0;
}
