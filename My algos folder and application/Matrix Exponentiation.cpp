#include<bits/stdc++.h>
using  namespace  std;

typedef long long int ll;
typedef unsigned long long int  llu;
#define N 101
ll ar[N][N],I[N][N];

///Simple matrix multiplication is in here
void mul(ll A[][N],ll B[][N],ll n)
{
	ll i,j,k;
	ll R[n+1][n+1];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			R[i][j]=0;

			for(k=1;k<=n;k++)
			{
			    ///row and column element multiplication and then adding
				ll x = (B[i][k]*A[k][j]);
				 R[i][j]=(R[i][j]+x);
			}
		}
	}

    ///Here Identity matrix stored the result
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		    ///Here result is being stored
			A[i][j]=R[i][j];
		}
	}
}


void power(ll A[][N],ll n,ll p)
{
	ll i,j;

	///until the power is not 0
	while(p)
	{
		if(p%2==1)
		{
		    ///as power is odd so just decrease power by one
			mul(I,A,n);
			p--;
		}
		else
        {
            ///as p is even so multiply 2 matrix and decrease power by divide by 2
			mul(A,A,n);
			p/=2;
		}
	}
}



int main()
{
		ll n,p,i,j,k;

		/// dimension of matrix and power
		cin>>n>>p;

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>ar[i][j];
			}
		}

		///In case of identity matrix any matrix
	///multiply with it remains same

	 ///If the matrix is not sqare matrix then max(row,coloumn) dimension identity matrix is used

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
              I[i][j]=1;
			else
			  I[i][j]=0;
		}
	}


        ///This power function do the exponention
		power(ar,n,p);

		///At last identity matrix I  hold the total exponential value
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cout<<I[i][j]<<" ";
			}
			cout<<'\n';
		}

	return 0;
}
