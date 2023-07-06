#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    if(fabs(a-b)<1e-9)
    {
        cout<<"a and b equal";
    }
    else
        cout<<"a and b not equal";
    return 0;
}
