#include<bits/stdc++.h>
using namespace std;
template<typename T>
T add(T a,T b)
{
    return a+b;
}
int main()
{
    int a=20,b=30;
    cout<<add<int>(a,b)<<"\n";
    float x=20.89,y=30.88;
    cout<<add<float>(x,y);
    return 0;
}
