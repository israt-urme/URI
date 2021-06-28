#include<stdio.h>
int main()
{
    double a;
    scanf("%lf",&a);
    if(a<=2000.00)
        printf("Isento\n");
    else if(2000.01<=a && a<=3000.00)
        printf("R$ %.2lf\n",((a-2000)*8)/100);
    else if(3000.01<=a && a<=4500.00)
        printf("R$ %.2lf\n",((1000*8)/100)+(((a-3000)*18)/100));
    else if(4500.00<=a)
        printf("R$ %.2lf\n",((1000*8)/100)+((1500*18)/100)+((a-4500)*28)/100);
    return 0;
}
