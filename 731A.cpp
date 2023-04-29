#include<bits/stdc++.h>
using namespace std;
int main()
{
     int sum=0,b,d;
     string s;
     cin>>s;
     int l=s.length();
     d=abs(s[0]-'a');
     if(d<=13)
     {
          sum=sum+d;
     }
     else
     {
          sum=sum+26-d;
     }
     for(int i=1;i<l;i++)
     {
          d=abs(s[i]-s[i-1]);
          if(d<=13)
         {
               sum=sum+d;
          }
          else
          {
               sum=sum+26-d;
          }
     }
     cout<<sum<<endl;
}
