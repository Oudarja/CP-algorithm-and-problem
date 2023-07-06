#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,sum=0,ans=0;
	cin>>n>>k;
	int a[n];
	unordered_map<ll,ll>reserve;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		if(sum==k)
			ans++;
			ans+=reserve[sum-k];
   reserve[sum]++;
	}
	cout<<ans;
return 0;
}
