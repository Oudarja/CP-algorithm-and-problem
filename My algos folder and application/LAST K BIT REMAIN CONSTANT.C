#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,t=0,k;
    scanf("%d%d",&n,&k);
    t=log2(n)+1;
    for(i=t-1;i>=0;i--)
    {
        if(n&(1<<i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
            n=(n&((1<<k)-1));
        for(i=t-1;i>=0;i--)
            {if(n&(1<<i))
            printf("1");
        else
            printf("0");
}
    return 0;
}
