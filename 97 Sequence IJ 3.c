#include<stdio.h>
int main(void){
    int i,j=7;
    for(i=1;i<=9;i=i+2){
        printf("I=%d J=%d\n",i,j);
        printf("I=%d J=%d\n",i,j-1);
        printf("I=%d J=%d\n",i,j-2);
        j=j+2;
    }
    return 0;
}

