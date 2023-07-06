#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll b,c=0,x,y,z,t,i,j,k,l1=1,l2,m,n,c1,c2,c3,c4,q,ans=0;
                string str;
            cin>>str;
         for(i=str.length()-1;i>=0;i--)
         {
             ans+=(str[i]-'0')*l1;
             ans%=4;
             l1=(l1*10)%4;
         }
 cout<<ans<<'\n';
}
