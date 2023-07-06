#include<stdio.h>
int res[100][100];
int main()
{
    int n,u,w,l,i,j,k;
    printf("Give first matrix row column\nGive second matrix row and column\n");
    scanf("%d%d%d%d",&n,&u,&w,&l);
    int m1[n][u],m2[w][l];
    printf("Give first matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<u;j++)
        {
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Give second matrix\n");
    for(i=0;i<w;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&m2[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            res[i][j]=0;
            for(k=0;k<u;k++)
            {
                res[i][j]=res[i][j]+m1[i][k]*m2[k][j];
            }
        }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");}
        return 0;
}
