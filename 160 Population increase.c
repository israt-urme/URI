#include <stdio.h>
int main()
{
    int p,q,i,t;
    float g1,g2;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&p,&q);
        scanf("%f %f",&g1,&g2);
        int y=0;
        while(p<=q){
            p=p+(p*g1)/100;
            q=q+(q*g2)/100;
            y++;
            if(y>100){
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(y<=100)
            printf("%d anos.\n",y);
    }
    return 0;
}


