#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,a,t;
     cin>>a;
     for(i=0;i<a;i++)
     {
          cin>>n;
          if(360%(180-n)==0)
          {
               cout<<"YES"<<endl;
          }
          else
          {
               cout<<"NO"<<endl;
          }
     }
}
