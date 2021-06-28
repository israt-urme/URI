#include<stdio.h>
int main()
{
    float a,b=0;
    int i,sum=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a);
        if(a>0){
            sum=sum+1;
            b=b+a;
            }
    }
    printf("%d valores positivos\n",sum);
    printf("%.1f\n",b/sum);
}
