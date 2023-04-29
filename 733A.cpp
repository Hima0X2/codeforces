#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     int i,c=1,d=1;
     cin>>s;
     int n=s.length();
     for(i=0;i<n;i++)
     {
          if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
          {
               d=1;
          }
          else
          {
               d++;
               if(d>c)
               {
                    c=d;
               }
          }
     }
     cout<<c<<endl;
}
