#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[200];
    int i=0;
    float l=0;
    double d=0;
    scanf("%s",str);
i=atoi(str);
printf("%d\n",i);
    sscanf(str,"%f",&l);
    printf("%f\n",l);
    sscanf(str,"%lf",&d);
    printf("%lf",d);
    return 0;
}
