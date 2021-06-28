#include<stdio.h>
int main()
{
    int i,sum=0,sub=0,j=0,k=0,l;
    int ara[15];
    int par[5];
    int impar[5];
    for(i=0;i<15;i++){
        scanf("%d",&ara[i]);
    }
    for(i=0;i<15;i++){
        if(ara[i]%2==0){
            sum=sum+1;
            par[j]=ara[i];
            j++;
        }

        if((ara[i]%2!=0)){
            sub=sub+1;
            impar[k]=ara[i];
            k++;
        }
        if(sum==5){
            for(l=0;l<5;l++){
                printf("par[%d] = %d\n",l,par[l]);
            }
            sum=0;
            j=0;
        }
            if(sub==5){
                for(l=0;l<5;l++){
                    printf("impar[%d] = %d\n",l,impar[l]);
                }
                sub=0;
                k=0;
            }
    }     if(sub!=5){
            for(j=0;j<sub;j++){
                printf("impar[%d] = %d\n",j,impar[j]);
            }
    }if(sum!=5){
            for(j=0;j<sum;j++){
                printf("par[%d] = %d\n",j,par[j]);
            }
    }
    return 0;

}
