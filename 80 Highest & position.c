#include<stdio.h>
int main()
{
    int n,i,h=-345,p;
    for(i=1;i<=5;i++){
        scanf("%d",&n);
        if(n>h){
            h=n;
            p=i;}
    }
    printf("%d\n",h);
    printf("%d\n",p);
    return 0;
}

