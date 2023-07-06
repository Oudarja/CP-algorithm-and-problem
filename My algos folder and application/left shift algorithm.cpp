///Given an array A1 and an destination array A2 . In the given array A1 i can choose a interval [l,r] and can left shift .This operation can be done in A1
///array unlimited times .Can the array A1 can be turned into array A2
///A1=[1,3,4,2,7]--->operation 1 on [1 3]------>A1=[1,4,2,3,7]
///soln: just checking each element of  from A2 that is it on the array A1 if not then memorize it by storing it on the multiset and when that type
///       of value need then erase it from the multiset and for traversing array takes n time each time checking in multiset tajes log(n) so total
///       O(nlog(n)) takes . if all  the element can be checked in this way in array A2 then it is possible because as any value that is not in the same
///        position in both array but the value that is preserved in multiset can be stored at the place where it needs by left shifting so this is possible

///EXAMPLE: A1 =[2 ,3 ,4, 5, 1]  A2=[2 ,4 ,5 ,3, 1].Now  left shifting on A1 at [1,3] A1=[2,4,5,3,1] which is A2 array
///EXAMPLE: A1=[2 ,3 ,4 ,5,1], A2=[3,2,5,1,4]. Now left shift on [0,1] ---A1=[3 ,2 ,4,5,1] ,again left shift on [2 4]----A1=[3 ,2 ,5,1,4] which is A2
///So ,if any value is present on the back side which is not present at the correct position as A2 in A1 that value can be taken at the correct position
/// by left shifting .
///The same shit is true for right shifting if the problem is defined in right shift then right shift can be done


#include<bits/stdc++.h>
using namespace std;
#define   ll long long int
int main()
{
    ll n,i,t;

    cin>>t;

    while(t--)
    {

    cin>>n;

    ll arr[n],des_arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

       for(i=0;i<n;i++)
    {
        cin>>des_arr[i];
    }

     multiset<ll>stt;

///index is for arr
ll index=0;

     for(i=0;i<n;i++)
     {
         if(arr[i]==des_arr[index])
         {
             index++;
         }
         else
         {
                if(stt.find(des_arr[index])!=stt.end())
                {
                    stt.erase(des_arr[index]);
                    i--;
                    index++;
                }
                else
                    {
                        stt.insert(arr[i]);
                    }
         }
     }


     while(index!=n&&stt.find(des_arr[index])!=stt.end())
     {
             stt.erase(des_arr[index]);
             index++;
     }


     if(index==n)
        cout<<"YES\n";
     else
        cout<<"NO\n";


    }

return 0;
}




