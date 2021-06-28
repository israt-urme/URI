#include<stdio.h>
int main()
{
    int a,b,i,j;
    float c,k,p;
    scanf("%d %d %f",&a,&b,&c);
    scanf("%d %d %f",&i,&j,&k);
    p = (b*c+j*k);
    printf("VALOR A PAGAR: R$ %.2f\n",p);
    return 0;
}
