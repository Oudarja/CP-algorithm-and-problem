//Range minimum query
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,map<ll,ll> >mp;
void process(ll a[],ll n)
{
    ll i,j;
    for(i=0;i<n;i++)
        mp[i][i]=i;
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
        {
            if(a[mp[i][j-1]]<a[j])
                mp[i][j]=mp[i][j-1];
            else
            mp[i][j]=j;
        }
    }
}
int main()
{

ll i,j,n,q,left,right;
cin>>n;
ll a[n];
for(i=0;i<n;i++)
cin>>a[i];
process(a,n);
cin>>q;
for(i=0;i<q;i++)
{

    cin>>left>>right;
    cout<<a[mp[left][right]]<<"\n";
}
return 0;
}
