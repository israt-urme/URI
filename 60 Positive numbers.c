#include<stdio.h>
int main()
{
    int i,s=0;
    float a;
    for(i=1;i<=6;i++){
        scanf("%f",&a);
        if(a>0)
        s=s+1;
    }
    printf("%d valores positivos\n",s);
    return 0;
}
