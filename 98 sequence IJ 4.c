#include<stdio.h>
int main(void){
    float i,j=1;
    for(i=0;i<=2.2;i=i+0.2){
        printf("I=%.1f J=%.1f\n",i,j+i);
        printf("I=%.1f J=%.1f\n",i,j+1+i);
        printf("I=%.1f J=%.1f\n",i,j+2+i);
    }
    return 0;
}
