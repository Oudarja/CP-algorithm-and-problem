///For optimal time-complexity Blocksize: sqrt(n*1.0)
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll block_size;
map<ll,ll>blocks;
ll build(ll a[],ll siz)
{
    ll currentsegment=-1;
    ll block_size=(ll)(sqrt(siz*1.0));
   ll i;
   for(i=0;i<siz;i++)
    blocks[i/block_size]=max(a[i],blocks[currentsegment]);

   return block_size;
}
void update(ll a[],ll index,ll new_value,ll block_size)
{
    blocks[index/block_size]-=a[index];
    blocks[index/block_size]+=new_value;
    a[index]=new_value;
}
ll query(ll a[],ll left,ll right,ll block_size)
{
    ll k=0;
    ll l=left;
    while(l<right&&l%block_size!=0)
    {
        k=max(a[l],k);
        l++;
    }
    while(l+block_size<=right)
    {
        k=max(k,blocks[l/block_size]);
        l+=block_size;
    }
    while(l<=right)
    {
          k=max(k,a[l]);
          l++;
    }
    return k;
}
int main()
{
    ll t,ind1,ind2,k,p,m,j,n,l1,l2,i=1,f;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        f=build(a,n);
        for(j=0;j<m;j++)
        {
            cin>>l1>>l2;
           cout<<query(a,l1,l2,f)<<"\n";
        }
        blocks.clear();
    }
return 0;
}
