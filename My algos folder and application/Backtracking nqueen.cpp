#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll board[1000][1000],k=0,ld[1000],rd[1000],cl[1000],n;
void Solvenqtill(ll col,ll board[1000][1000])
{
    if(col>=n)
    {
        k++;
        cout<<k<<"\n";
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
                cout<<board[i][j]<<" ";
        }
        cout<<"\n";
    }
        return;
    }
    for(ll i=0;i<n;i++)
    {
        if(ld[i-col+n-1]!=1&&rd[i+col]!=1&&cl[i]!=1)
        {
            board[i][col] = 1;
            ld[i-col+n-1] = 1;
            rd[i+col] = cl[i] = 1;
            Solvenqtill(col+1,board);
            board[i][col]=0;
            ld[i-col+n-1]=0;
            rd[i+col]=cl[i]=0;
        }
    }
}
int main()
{
    cin>>n;
    Solvenqtill(0,board);
    if(k==0)
        cout<<"No solution";
    return 0;
}
