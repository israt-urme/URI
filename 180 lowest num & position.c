#include<stdio.h>
int main()
{
    int i,a,n,lowest,p=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        lowest=x[0];
    }
    for(i=1;i<n;i++){
        if(lowest>x[i]){
            lowest=x[i];
            p=i;
        }
    }
    printf("Menor valor: %d\n",lowest);
    printf("Posicao: %d\n",p);
    return 0;
}
