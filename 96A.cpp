#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     int i,j=1;
     cin>>s;
     int n=s.length();
     for(i=1;i<n;i++)
     {
          if(s[i-1]==s[i])
          {
               j++;
               if(j==7){break;}
          }
          else
          {
               j=1;
          }
     }
    // cout<<j<<endl;
    if(j==7) {cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;
     return 0;
}
