#include<stdio.h>
int main()
{
    float n1,n2,n3,n4,s,t,a;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    s= (n1*2+n2*3+n3*4+n4*1)/10.0;
    printf("Media: %.1f\n",s);

    if(s>=7.0)
        printf("Aluno aprovado.\n");
    if(s<5.0)
        printf("Aluno reprovado.\n");
    if(s>=5.0 && s<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%f",&t);
        printf("Nota do exame: %.1f\n",t);
        a=(s+t)/2.0;
        if(a>=5.0){
            printf("Aluno aprovado.\n");}
        else{
            printf("Aluno reprovado.\n");}
        printf("Media final: %.1f\n",a);
    }
    return 0;
}
