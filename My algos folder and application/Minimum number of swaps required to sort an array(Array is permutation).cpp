#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,i;
    cin>>n;
    ll arr[n],ans=0;
    for(i=0;i<n;i++)
    cin>>arr[i];
    vector<ll>vis(1000000,0);
    for(i=0;i<n;i++)
    {
           if(vis[i]||i==arr[i]-1)
           {

           }
           else
           {
               ll one=i;
               ll two=arr[i]-1;
               vis[i]=1;
               ll len=1;
               while(!vis[two])
               {
                vis[two]=1;
                one=two;
                two=arr[two]-1;
                len++;
               }
               ans+=len-1;
           }
    }

    cout<<ans;
return 0;
}
