#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string str;
    cin>>str;
     ll i,j=0;
     vector<ll>lps(str.length(),0);

     for(i = 1; i<str.length() ;)
     {
         if(str[j]==str[i]) lps[i] = j+1, i++, j++;
         else{
            if(j!=0) j = lps[j-1];
            else  lps[i] = j , i++;
         }
     }
     cout<<"Showing longest proper prefix which is suffix array\n";
     for(i=0;i<lps.size();i++)
        cout<<lps[i]<<" ";
return 0;
}
