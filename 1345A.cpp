#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,a,b;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>a>>b;
          if(a==1||b==1||a*b==4)
          {
               cout<<"YES"<<endl;
          }
          else
          {
                 cout<<"NO"<<endl;
          }
     }
}
