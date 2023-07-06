#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,c=0;
    cout<<"Give how much string want to give\n";
    cin>>n;
    string str[n],st;
    set<string>s;
    map<string,long long int>m;
    for(i=0;i<n;i++)
    {
        cin>>str[i];
        s.insert(str[i]);
        m[str[i]]++;
    }
    cout<<"Give string to find frequency\n";
    cin>>st;
    cout<<m[st];
   return 0;
}
