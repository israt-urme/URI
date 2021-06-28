#include<stdio.h>
int main()
{
    int i;
    float sum=0,b=1.0;
    for(i=1;i<=39;i=i+2){
        sum=sum+(i/b);
        b=b+b;
    }
    printf("%.2f\n",sum);
    return 0;
}

