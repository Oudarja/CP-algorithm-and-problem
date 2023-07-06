#include<stdio.h>
#include<stdlib.h>
int arr[10^18];
int main()
{
    int t=0,size,i;
    printf("Give the array size\n");
    scanf("%d",&size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
        printf("Duplicate element:");
    for(i=0;i<size;i++)
    {
        if(arr[abs(arr[i])]>=0)
            arr[abs(arr[i])]=-arr[abs(arr[i])];
        else
        {
            printf("%d ",abs(arr[i]));
            t++;
        }
    }
    printf("\nThe number of diff element %d",size-t);
    return 0;
}
