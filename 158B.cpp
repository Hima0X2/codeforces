#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,x=0; bool flag;
     string s;
     cin>>s;
     int n=s.length();
     if(s[0]>='a' && s[0]<='z')
     {
          for(i=1;i<n;i++)
          {
               if(s[i]>='A' && s[i]<='Z')
               {
                    x++;
               }
          }
          if(x==n-1)flag = true;
          else flag = false;
          if(flag==true)
          {
               s[0]=toupper(s[0]);
               cout<<s[0];
               for(i=1;i<n;i++)
               {
                    s[i]=tolower(s[i]);
                    cout<<s[i];
               }
               cout<<endl;
          }
          else
          {
               cout<<s<<endl;
          }
     }
     else
     {
          for(i=0;i<n;i++)
          {
               if(s[i]>='A' && s[i]<='Z')
               {
                    x++;
               }
          }
          if(x==n)flag = true;
          else flag = false;
          if(flag==true)
          {
               for(i=0;i<n;i++)
               {
                    s[i]=tolower(s[i]);
                    cout<<s[i];
               }
               cout<<endl;
          }
          else
          {
               cout<<s<<endl;
          }
     }


}
