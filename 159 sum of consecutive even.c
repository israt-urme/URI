#include <stdio.h>
int main()
{
    int x,i;
    for(;;){
        scanf("%d",&x);
        if(x==0)
            break;
    int sum=0,sum1=0;
        for(;;){
            if(x%2==0){
                sum=sum+x;
                sum1++;}
            x++;
            if(sum1==5)break;
        }
    printf("%d\n",sum);
    }
    return 0;
}
