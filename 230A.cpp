#include<bits/stdc++.h>
using namespace std;
int main()
{
     int s,n,i,j=0;
     cin>>s>>n;
     int x[n],y[n];
     for(i=0;i<n;i++)
     {
          cin>>x[i]>>y[i];
     }
     for(i=0;i<n;i++)
     {
          if(x[i]<s){
              // b[i]=b[i]+k;
               s=y[i]+s;
          }
          else{
               j=1;
          }
     }
     if(j==0)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
}
