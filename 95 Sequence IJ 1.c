#include<stdio.h>
int main(void)
{
    int i,j;
    for(i=1;i<=j;)
    {
        for(j=60;j>=0;j=j-5)
        {
            printf("I=%d J=%d\n",i,j);
            i=i+3;}
    }
    return 0;
}



