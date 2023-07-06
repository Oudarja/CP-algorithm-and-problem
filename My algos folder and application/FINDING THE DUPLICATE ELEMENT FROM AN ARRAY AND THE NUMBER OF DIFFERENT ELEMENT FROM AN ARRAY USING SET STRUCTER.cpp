#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<long long int>s;
    multiset<long long int>s1;
    long long int x,a,n;
    cout<<"Give how much element want to insert\n";
    cin>>n;
    for(x=0;x<n;x++)
    {
        cin>>a;
        s.insert(a);
        s1.insert(a);
    }
    cout<<"NUMBER OF DIFFERENT ELEMENT"<<s.size()<<"\n";
    cout<<"Number of frequency\n";
    for(x:s)
    {
        cout<<x<<"Frequency is"<<s1.count(x)<<"\n";
    }
    cout<<"Proof of built in sort in set\n";
    for(x:s1)
    {
        cout<<x<<" ";
    }
    cout<<"To erase something from set\nGive the value to erase\n";
    cin>>a;
    s1.erase(s1.find(a));
    for(x:s1)
    {
        cout<<x<<" ";
    }
cout<<"If i want to a erase all frequency of an element\n";
cout<<"Give element to erase\n";
cin>>a;
s1.erase(a);
for(x:s1)
    {
        cout<<x<<" ";
    }
    return 0;
}

