#include<stdio.h>
int main()
{
    int a,b,c,d;
    int x,y,z;
    scanf("%d %d %d %d",&a,&x,&b,&y);
    c=b-a;
    if(c<0){
        c=24+(b-a);
    }
    z=y-x;
    if(z<0){
        z=60+(y-x);
        c=c-1;
    }
    if(a==b && x==y)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,z);
    return 0;
}
