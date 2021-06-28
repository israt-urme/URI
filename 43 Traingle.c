#include<stdio.h>
int main()
{
    float x,y,z;
    scanf("%f %f %f",&x,&y,&z);
    if(x<y+z && z<x+y && y<x+z)
        printf("Perimetro = %.1f\n",(x+y+z));
    else
        printf("Area = %.1f\n",(z*(x+y))/2.0);
    return 0;
}
