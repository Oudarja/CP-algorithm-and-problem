#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    map<ll,ll>mp;
    ll n,i,j;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    ll compresion[1000],assigne=0,c=0;
    for(i=0;i<n;i++)
    {
        j=a[i];
        if(mp.find(j)==mp.end())
        {
           mp[j]=assigne;
           cout<<j<<" is mapped with "<<assigne<<"\n";
           assigne++;
        }
        compresion[c++]=mp[j];
    }
cout<<"\n\n Compressed array\n";
for(i=0;i<n;i++)
        cout<<mp[a[i]]<<" ";

return 0;
}
