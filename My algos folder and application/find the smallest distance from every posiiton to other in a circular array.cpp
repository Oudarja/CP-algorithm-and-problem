///Given an array which have 0 and 1 and the length of array will be at least 2 .
///Find the minimum distance for every position
///to other which has 1 in that position in circular array


#include<bits/stdc++.h>
using namespace std;
#define   ll long long int
#define inf 1000000000000000000
#define pb push_back
int main()
{

       ll n,i;
      cin>>n;

      ll arr[n];

        bool non_zero=false;

        vector<ll>tim(n+1,inf);

       for(i=0;i<n;i++)
        {
             cin>>arr[i];
             if(arr[i])
             non_zero=true;
        }

           for(i=0;i<n;i++)
            {
                       tim[i]=inf;
            }


        if(!non_zero)
        {
            for(i=0;i<n;i++)
                cout<<tim[i]<<' ';
        }
        else
        {
            vector<ll>vec;

           for(i=0;i<2*n;i++)
           {
               if(arr[i%n]>0)
                  vec.pb(i);
           }

            for(i=0;i<2*n;i++)
            {
                      ll idx=upper_bound(vec.begin(),vec.end(),i)-vec.begin();

                          if(idx==vec.size())
                            {
                                if(vec[idx-1]==i)
                                {
                                    if(idx-2>=0)
                                   {
                                     tim[i%n]=min(tim[i%n],i-vec[idx-2]);
                                   }
                                   continue;
                                }
                             tim[i%n]=min(tim[i%n],i-vec[idx-1]);
                            }
                      else if(idx==0)
                         tim[i%n]=min(tim[i%n],vec[idx]-i);
                      else
                      {
                          tim[i%n]=min(tim[i%n],vec[idx]-i);

                          if(vec[idx-1]==i)
                            {
                                 if(idx-2>=0)
                                   {
                                     tim[i%n]=min(tim[i%n],i-vec[idx-2]);
                                  }

                                   continue;
                            }

                          tim[i%n]=min(tim[i%n],i-vec[idx-1]);
                      }
                }


                for(i=0;i<n;i++)
                cout<<tim[i]<<' ';

        }


return 0;
}
