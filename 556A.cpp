#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,c=0,d=0;
     cin>>n;
     string s;
     cin>>s;
     for(i=0;i<n;i++)
     {
          if(s[i]=='0')
          {
               c++;
          }
          else
          {
               d++;
          }
     }
     cout<<abs(c-d)<<endl;
}
