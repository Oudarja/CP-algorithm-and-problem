#include<bits/stdc++.h>
#define   scll(x) scanf("%lld",&x)
using namespace std;
#define   ll  long long int
int main()
{
ll n,k,i,j;
    scll(n);
	scll(k);
 	ll arr[n][n];
 	memset(arr,0,sizeof(arr));
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (k)
			{
				arr[j][(i + j) % n] = 1;
				k--;
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			cout << arr[i][j] ;
		cout << '\n';
	}

return 0;
}
