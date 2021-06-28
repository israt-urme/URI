#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<=5;)
        {
            if(n%2!=0){
                printf("%d\n",n);
                i++;}

            n++;
        }
    }
    return 0;
}
