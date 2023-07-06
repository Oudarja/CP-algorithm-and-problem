#include <bits/stdc++.h>
using namespace std;
void removeDupWord(string str)
{
    int i;
   string word = "";
   for (i=0;i<str.length();i++)
   {
       if (str[i]==' ')
       {
           cout << word << endl;
           word = "";
       }
       else
       {
           word = word+str[i];
       }
   }
   cout << word << endl;
}
// Driver function
int main()
{
    string str = ".";
    removeDupWord(str);
    return 0;
}
