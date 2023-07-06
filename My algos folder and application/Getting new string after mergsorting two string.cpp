#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2,str3="";
    cin>>str1>>str2;
    merge(str1.begin(),str1.end(),str2.begin(),str2.end(),back_inserter(str3));
    cout<<str3;
}
