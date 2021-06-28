#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=24-a;
    d=b-0;
    if((c+d)>24)
        printf("O JOGO DUROU %d HORA(S)\n",(c+d)-24);
    else
        printf("O JOGO DUROU %d HORA(S)\n",c+d);
    return 0;
}
