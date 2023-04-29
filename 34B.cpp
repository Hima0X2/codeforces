#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,i,sum=0;
     cin>>n>>m;
     int a[n];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
     sort(a,a+n);
     for(int j=0;j<m;j++){
          if(a[j]<0){
               sum=sum+abs(a[j]);
          }
     }
     cout<<sum<<endl;
}
