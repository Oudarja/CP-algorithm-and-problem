#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
    ll n,i;
    vector<pair<ll,ll> >vec;
    cin>>n;
    ll arr[n],ans=0;
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    vec.pb({arr[i],i});
    }
    sort(vec.begin(),vec.end());
    vector<ll>vis(1000000,0);
    for(i=0;i<n;i++)
    {
           if(vis[i]||i==vec[i].ss)
           {

           }
           else
           {
               ll one=i;
               ll two=vec[i].ss;
               vis[i]=1;
               ll len=1;
               while(!vis[two])
               {
                vis[two]=1;
                two=vec[two].ss;
                len++;
               }
               ans+=len-1;
           }
    }

    cout<<ans;
return 0;
}

