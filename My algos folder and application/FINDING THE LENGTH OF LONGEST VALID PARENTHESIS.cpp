#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    stack<int>st;
    st.push(-1);
    int k=0,t=0,c=0;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(')
        {
            st.push(i);
        }
        else
        {
            st.pop();
            if(!(st.empty()))
            {
                k=max(k,i-st.top());
            }
            else
                st.push(i);
    }
    }
    cout<<k;
    return 0;
}
