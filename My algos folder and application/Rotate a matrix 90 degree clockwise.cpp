//prepared by dumb
#include<bits/stdc++.h>
using namespace std;
#define   ll long long int
int main()
{
   ll n,m,i,j;
  cin>>n>>m;

  ll arr[n][m];

  for(i=0;i<n;i++)
  {
      for(j=0;j<m;j++)
      {
          cin>>arr[i][j];
      }
  }
///transpose matrix
  for(i=0;i<n;i++)
  {
      for(j=i;j<n;j++)
      {
          swap(arr[i][j],arr[j][i]);
      }
  }

  ///For 90 degree rotation on clockwise reverse element of 2d matrix for each row
  ///The same procedure except reverse element of 2d matrix for each column just used in case of 90 anti clockwise rotation


  for(i=0;i<n;i++)
  {
      for(j=0;j<n/2;j++)
      {
          swap(arr[i][j],arr[i][n-1-j]);
      }
  }
cout<<"After first rotation:\n";
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
        cout<<arr[i][j]<<' ';
      cout<<'\n';
  }


  ///transpose matrix
  for(i=0;i<n;i++)
  {
      for(j=i;j<n;j++)
      {
          swap(arr[i][j],arr[j][i]);
      }
  }

  ///For 90 degree rotation on clockwise reverse element of 2d matrix for each row
  ///The same procedure except reverse element of 2d matrix for each column just used in case of 90 anti clockwise rotation


  for(i=0;i<n;i++)
  {
      for(j=0;j<n/2;j++)
      {
          swap(arr[i][j],arr[i][n-1-j]);
      }
  }
   cout<<"After second rotation:\n";
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
        cout<<arr[i][j]<<' ';
      cout<<'\n';
  }


  return 0;
}
