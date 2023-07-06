#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str;
     int l=0,i;
     cin>>str;
    sort(str.begin(),str.end());
    do{
        cout<<str<<"\n";
}while(next_permutation(str.begin(),str.end()));
return 0;
}
