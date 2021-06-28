#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f",&a);
    if(0.00<=a && a<=400.00){
        b=((a*15)/100)+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",(a*15)/100);
        printf("Em percentual: 15 % %\n");
    }
    if(400.01<=a && a<=800.00){
        b=((a*12)/100)+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",(a*12)/100);
        printf("Em percentual: 12 % %\n");
    }
    if(800.01<=a && a<=1200.00){
        b=((a*10)/100)+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",(a*10)/100);
        printf("Em percentual: 10 % %\n");
    }
    if(1200.01<=a && a<=2000.00){
        b=((a*7)/100)+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",(a*7)/100);
        printf("Em percentual: 7 % %\n");
    }
    if(2000.01<=a){
        b=((a*4)/100)+a;
        printf("Novo salario: %.2f\n",b);
        printf("Reajuste ganho: %.2f\n",(a*4)/100);
        printf("Em percentual: 4 % %\n");
    }

    return 0;
}
