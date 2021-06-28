#include<stdio.h>
int main()
{
    long int n,i;
    scanf("%d",&n);
    for(i=1;i<100;i++){
        if(i%n==2)
        printf("%d\n",i);
    }
    return 0;
}
