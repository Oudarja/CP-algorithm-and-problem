#include<stdio.h>
int main()
{
    int n,t=0,i;
    scanf("%d",&n);
    t=log2(n*1.0)+1;
    for(i=t-1;i>=0;i--)
    {
        if(n&(1<<i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    for(i=0;i<t;i++)
    {
        if(n&(1<<i))
        n=(n^(1<<i));
        else
        n=(n|(1<<i));
    }
    for(i=t-1;i>=0;i--)
    {
        if(n&(1<<i))
            printf("1");
        else
            printf("0");
    }
    return 0;
}
