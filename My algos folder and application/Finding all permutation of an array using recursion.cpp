#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool chosen[100000];
vector<ll>vec;
void permutation(ll n,ll arr[])
{
    ll i;
 if(vec.size()==n)
 {
     for(i=0;i<n;i++)
        cout<<vec[i];
     cout<<"\n";
 }
 else
 {
     for(i=0;i<n;i++)
     {
        if(chosen[arr[i]]==true)
            continue;
         vec.push_back(arr[i]);
         chosen[arr[i]]=1;
         permutation(n,arr);
         chosen[arr[i]]=false;
         vec.pop_back();
     }
 }
}
int main()
{
    ll i,j,k,n;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    permutation(n,arr);
return 0;
}

