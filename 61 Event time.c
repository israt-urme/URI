#include<stdio.h>
int main()
{
    int s,m,h,d,mi,day;
    char c[10],c1[10],x,y,z,x1,y1,z1;
    scanf("%s %d %d %c %d %c %d",c,&d,&h,&x,&m,&y,&s);
    int s1,m1,h1,d1;
    scanf("%s %d %d %c %d %c %d",c1,&d1,&h1,&x1,&m1,&y1,&s1);
    /*event duration in seconds..1d=86400s*/
    long dur = (d1*86400 + h1*3600 + m1*60 + s1) - (d*86400 + h*3600 + m*60 + s);
    printf("%d dia(s)\n",dur/86400);
    printf("%d hora(s)\n",(dur%86400)/3600);
    printf("%d minuto(s)\n",((dur%86400)%3600)/60);
    printf("%d segundo(s)\n",((dur%86400)%3600)%60);
    return 0;
}
