#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<int>st;
    string str;
    int i,c=0;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            st.push(i);
        }
        else
        {
            //st.top();
            if(st.empty())
            {
                c=1;
                break;
            }
            else
             st.pop();
        }
    }
    if(c==1)
        cout<<"Non regular bracket sequence";
    else
    {
        if(st.empty())
            cout<<"Regular bracket sequence";
        else
            cout<<"Non regular bracket sequence";
    }
    return 0;
}
