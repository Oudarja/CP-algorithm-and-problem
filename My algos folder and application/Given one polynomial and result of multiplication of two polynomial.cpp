///Given one polynomial A(x) and result of multiplication of A(x)*B(x)=C(x)
///Find B(x)
#include<bits/stdc++.h>
using namespace std;
#define   ll long long int
int main()
{

  ///A(x) has coefficient of A0,A1,A2,..........An
    cin>>n;
  ///B(x) has coefficient of B0,B1,B2...........Bm
    cin>>m;


  ll arr[n+1],ans[m+1],result[n+m+1];

   for(i=0;i<=n;i++)cin>>arr[i];

   for(i=0;i<=n+m;i++)cin>>result[i];




     ///Simulating the division process C(x)/A(x) to find B(x)
     ///In case of polynomial division the division process should be started from the maximum power
     for(i=m;i>=0;i--)
     {
        ans[i]=result[i+n]/arr[n];
        for(j=n;j>=0;j--)
          result[i+j]-=ans[i]*arr[j];
     }


     for(i=0;i<=m;i++)
      cout<<ans[i]<<' ';

return 0;
}





