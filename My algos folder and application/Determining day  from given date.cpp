//Use of Zeller's rule
#include<bits/stdc++.h>
using namespace std;
int arr[100];
int main()
{
    int date,month,year,n,p,q=0,i=0,test=0,t=0;
    cout<<"Give the value of Date\n";
    cin>>date;
    cout<<"Give the value of Month\n";
    cin>>month;
    cout<<"Give the value of Year\n";
    cin>>year;
    if(month==1||month==2)
    {
        year=year-1;
        if(month==1)
            month=11;
        else
            month=12;
    }
    n=year;
    while(n!=0)
    {
        q=n%10;
        n=n/10;
        arr[i++]=q;
    }
    t=(arr[i-1]*10)+arr[i-2];
     test=date+((13*month-1)/5)+(year%100)+((year%100)/4)+(t/4)-(2*t);
    if(test>7)
        test=test%7;
    if(test==0)
    cout<<"Sunday\n";
    else if(test==1)
        cout<<"Monday\n";
    else if(test==2)
        cout<<"Tuesday\n";
    else if(test==3)
        cout<<"Wednesday\n";
    else if(test==4)
        cout<<"Thursday\n";
    else if(test==5)
        cout<<"Friday\n";
    else
        cout<<"Saturday\n";
        //cout<<test;

    return 0;
}
