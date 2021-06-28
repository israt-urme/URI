#include<stdio.h>
int main()
{
    float a,b,c,x,y;
    scanf("%f %f %f",&a,&b,&c);
    x=(-b+(sqrt(b*b-4*a*c)))/(2*a);
    y=(-b-(sqrt(b*b-4*a*c)))/(2*a);
    if((2*a)!=0 && (sqrt(b*b-4*a*c))>0)
    {
        printf("R1 = %.5f\n",x);
        printf("R2 = %.5f\n",y);
    }
    else
        printf("Impossivel calcular\n");
}
