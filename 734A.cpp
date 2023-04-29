#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,sum=0,sub=0,i;
     string s;
     cin>>n;
     cin>>s;
     for(i=0;i<n;i++)
     {
          if(s[i]=='A')
          {
               sum++;
          }
          else if(s[i]=='D')
          {
               sub++;
          }
     }
     if(sum>sub)
     {
          cout<<"Anton"<<endl;
     }
     else if(sum<sub)
     {
          cout<<"Danik"<<endl;
     }
     else if(sum==sub)
     {
          cout<<"Friendship"<<endl;
     }
}
