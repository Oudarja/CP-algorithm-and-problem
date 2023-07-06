#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll i,j,n,k=-1,a,b,u=1e18;
    cin>>n;
    map<ll,ll>m;
    for(i=0;i<n;i++)
    {
        
        cin>>a>>b;
        m[a]++;
        m[b+1]--;
        k=max(k,b);
        u=min(u,a);
    }
    for(i=u+1;i<=k;i++)
    {
        m[i]=m[i-1]+m[i];
    }
    for(i=u;i<=k;i++)
        cout<<i<<" "<<m[i]<<"\n";
return 0;
}
