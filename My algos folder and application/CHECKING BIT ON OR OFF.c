#include<stdio.h>
int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    t=log2(n)+1;
    for(i=t-1;i>=0;i--)
    {
        if(n&(1<<i))
            printf("1");
        else
            printf("0");
    }
    for(i=0;i<t;i++)
    {
        if(n&(1<<i))
            printf("\n%d bit is on",i+1);
        else
            printf("\n%d bit is off",i+1);
    }
    return 0;
}
