#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    if(a>=0 && a<=25)
        printf("Intervalo [0,25]\n");
    if(a>25 && a<=50.00)
        printf("Intervalo (25,50]\n");
    if(a>50.00 && a<=75.00)
        printf("Intervalo (50,75]\n");
    if(a>75.00 && a<=100.00)
        printf("Intervalo (75,100]\n");
    else if(a<0 || a>100)
        printf("Fora de intervalo\n");
    return 0;
}
