#include<bits/stdc++.h>
using namespace std;
int arr[100000];
int main()
{
    int i,j,n,temp=0,m=0;
    string str;
    cout<<"Give the number\n";
    cin>>str>>n;
    for(i=0;i<str.length();i++)
    {
        temp=temp*10+str[i]-'0';
         if(m==0&&temp==0)
          {
        arr[m++]=0;
        break;
          }
        else if(temp/n==0&&m>0)
        arr[m++]=temp/n;
        else if(temp/n>0)
            arr[m++]=temp/n;
        temp=temp%n;
    }
    for(i=0;i<m;i++)
        cout<<arr[i];
  return 0;
}


