#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j,n,k=0;
    cin>>n;
    int a[n],output[n+1];
    for(i=0;i<n;i++)
        {cin>>a[i];
        k=max(k,a[i]);
        }
        int frq[k+1];
        memset(frq,0,sizeof(frq));
        for(i=0;i<n;i++)
        {
            frq[a[i]]++;
        }
    for(i=1;i<k+1;i++)
        frq[i]=frq[i-1]+frq[i];
    for(i=0;i<n;i++)
    {
        output[--frq[a[i]]]=a[i];
    }
    for(i=0;i<n;i++)
        cout<<output[i]<<" ";
}
