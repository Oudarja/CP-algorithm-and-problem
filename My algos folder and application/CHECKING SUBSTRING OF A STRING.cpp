#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,l=0,j;
    string str;
    cin>>str;
    l=str.length();
    for(i=0;i<l;i++)
    {
        for(j=1;j<=l-i;j++)
        {
            cout<<str.substr(i,j)<<"\n";
        }
    }
    return 0;
}
