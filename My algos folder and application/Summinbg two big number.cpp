#include<bits/stdc++.h>
#define ll long long int
using namespace std;
string sum(string str1,string str2)
{
    if(str1.length()<str2.length())
    swap(str1,str2);
    ll n1=str1.length();
    ll n2=str2.length();
    ll c=0,carry=0,i,j;
    string sum="";
    ll dif=n1-n2;
    for(i=n2-1;i>=0;i--)
    {
       c=(str1[i+dif]-'0'+str2[i]-'0')+carry;
       sum+=(c%10)+'0';
       carry=c/10;
    }
    for(j=n1-n2-1;j>=0;j--)
    {
        c=(str1[j]-'0'+carry);
        sum+=(c%10)+'0';
        carry=c/10;
    }
        if(carry)
        sum+=carry+'0';
    reverse(sum.begin(),sum.end());
    return sum;
}
int main()
{
    ll i,k,j;
    string str1,str2;

    cin>>str1;
    cin>>str2;
    cout<<sum(str1,str2);
return 0;
}
