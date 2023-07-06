///Multiplication of 2 polynomial such that given a0+a1*x+a2*x^2+a3*x^3+....an*x^n  and b0+b1*x+b2*x^2+b3*x^3+....bn*x^m
#include<bits/stdc++.h>
using namespace std;
#define   ll long long int
int main()
{

    ll n,m,i,j;
  cin>>n>>m;
   ll ans[n+m]={0};
   ll arr[n],brr[m];
   for(i=0;i<n;i++)
    cin>>arr[i];

      for(i=0;i<m;i++)
       cin>>brr[i];

       ///as Ai will be multiplied with Bj so Ai*Bj [the coefficient will be stored in ans[i+j] ] and the order of x will be x^(i+j)
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            ans[i+j]+=(arr[i]*brr[j]);
        }
    }

    for(i=0;i<(n+m-1);i++)
        cout<<ans[i]<<' ';


return 0;

}
