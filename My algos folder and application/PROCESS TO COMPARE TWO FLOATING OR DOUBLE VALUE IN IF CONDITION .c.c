#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(a-b<0)
    {
    if(((a-b)*(-1))<(1e-9))
    {
        printf("equal");
    }
    else
    printf("not equal");
    }
    else
        {
            if((a-b)<(1e-9))
        printf("equal");
    else
    printf("not equal");
        }
    return 0;
}
