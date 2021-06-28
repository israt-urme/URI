#include<stdio.h>
int main()
{
    int x,y,i,a;
    int sum=0,sum1=0,sum2=0,s=0;
    for(;;)
    {
        for(i=0;i<1;i++)
        {
            scanf("%d %d",&x,&y);
            printf("Novo grenal (1-sim 2-nao)\n");
            if(x>y){
                sum++;
            }
            if(x<y){
                sum1++;
            }
            if(x==y){
                sum2++;
            }
        }
        scanf("%d",&a);
        if(a==1)
            continue;
        else
            break;
    }

    printf("%d grenais\n",sum+sum1+sum2);
    printf("Inter:%d\n",sum);
    printf("Gremio:%d\n",sum1);
    printf("Empates:%d\n",sum2);
    printf("Inter venceu mais\n");
    return 0;
}
