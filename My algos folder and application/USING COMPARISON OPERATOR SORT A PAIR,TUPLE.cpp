#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i;
   vector< pair < int,int > >v;
   cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    for(i=0;i<t;i++)
        cout<<v[i].first<<v[i].second<<"\n";
    return 0;
}
