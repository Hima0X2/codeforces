#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,p[100],q[100],count=0;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>p[i];
          cin>>q[i];
          if(p[i]+1<q[i])
          {
               count++;
          }
     }
     cout<<count<<endl;
     return 0;
}
