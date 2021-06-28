#include<stdio.h>
int main()
{
    int i,a,sum=0;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a);
        if(a%2==0){
        sum=sum+1;}
    }
    printf("%d valores pares\n",sum);
}

