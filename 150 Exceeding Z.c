#include<stdio.h>
int main()
{
    int x,z,i,sum=0,sum1=0;;
    scanf("%d",&x);
    for(;;){
       scanf("%d",&z);
       if(z>x)break;
    }
    for(i=x;i<=z;i++){
        sum=sum+i;
        sum1++;
        if(sum>z)
            break;
    }
    printf("%d\n",sum1);
    return 0;

}
