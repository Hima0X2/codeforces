#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,j=1,c=0;
     string s;
     cin>>n;
     for(i=0;i<n;i++,j++){
          cin>>s;
          if(s[i]=='(')
          {
               if(s[j]==')')
               {
                    c++;
               }
          }
           if(s[i]=='{')
          {
               if(s[j]=='}')
               {
                    c++;
               }
          }
           if(s[i]=='[')
          {
               if(s[j]==']')
               {
                    c++;
               }
          }
     }
}
