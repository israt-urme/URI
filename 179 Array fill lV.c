#include<stdio.h>
int main()
{
    int j,par[5],impar[5],n,p=0,i=0,k;
    for(j=0;j<15;j++){
        scanf("%d",&n);
        if(n%2==0){
            par[p]=n;
            p++;
            if(p==5){
                for(k=0;k<5;k++){
                    printf("par[%d] = %d\n",k,par[k]);
                    par[k]=0;
                }
                p=0;
            }
        }
        else{
            impar[i]=n;
            i++;
            if(i==5){
                for(k=0;k<5;k++){
                    printf("impar[%d] = %d\n",k,impar[k]);
                    impar[k]=0;
                }
                i=0;
            }
        }
    }
    for(j=0;j<5;j++){
        if(impar[j]==0)
            break;
        printf("impar[%d] = %d\n",j,impar[j]);
    }
    for(j=0;j<5;j++){
        if(par[j]==0)
            break;
        printf("par[%d] = %d\n",j,par[j]);
    }
    return 0;
}


