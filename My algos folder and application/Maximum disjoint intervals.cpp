#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool comp(pair<ll,ll>p1,pair<ll,ll>p2)
{
	return p1.second<p2.second;
}
int main()
{
       ll i,j,k,n,x,y;
       cin>>n;
       vector<pair<ll,ll> >interval,ans;
       for(i=0;i<n;i++)
       	{
       		cin>>x>>y;
       		interval.push_back(make_pair(x,y));
       	}
       	
       	sort(interval.begin(),interval.end(),comp);
        
       	   x=interval[0].first;
       	   y=interval[0].second;
       	   ans.push_back({x,y});
         for(i=1;i<interval.size();i++)
         {
         	if(interval[i].first>y)
         	{
                 ans.push_back({interval[i].first,interval[i].second});
                 y=interval[i].second;
         	}
         }
         for(i=0;i<ans.size();i++)
         	cout<<ans[i].first<<' '<<ans[i].second<<'\n';




return 0;
}