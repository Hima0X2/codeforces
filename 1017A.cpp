#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a[10000],b[10000],c[10000],d[10000],i,j=0,n,sum,mx=1;
     cin>>n;
     cin>>a[0]>>b[0]>>c[0]>>d[0];
     sum=a[0]+b[0]+c[0]+d[0];
     for(i=1;i<n;i++){
          cin>>a[i]>>b[i]>>c[i]>>d[i];
          if(sum<a[i]+b[i]+c[i]+d[i]){
             mx++;
          }
     }
     cout<<mx<<endl;
}
