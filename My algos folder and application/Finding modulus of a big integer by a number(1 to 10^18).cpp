#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,temp=0;
    string str;
    cout<<"Give the number\n";
    cin>>str>>n;
    for(i=0;i<str.length();i++)
    {
        temp=temp*10+str[i]-'0';
        temp=temp%n;
    }
    cout<<temp;
}

