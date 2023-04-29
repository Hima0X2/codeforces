#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n;
     string a,b;
     cin>>a>>b;
     n=a.length();
     for(i=0;i<n;i++)
     {
          if(a[i]==b[i])
          {
               cout<<"0";
          }
          else
          {
               cout<<"1";
          }
     }
     cout<<endl;
     return 0;
}
