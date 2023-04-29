#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,j,m,d,x;
     cin>>n>>m;
     int a[n],b[m];
     for(i=0;i<n;i++)
     {
          cin>>a[i];
     }
      for(j=0;j<m;j++)
     {
          cin>>b[j];
     }
     sort(a,a+n);
     sort(b,b+m);
    if(a[0]*2>a[n-1]){
     //cout<<"-1"<<endl;
    if(a[0]*2<b[0])
     {
          cout<<a[0]*2<<endl;
     }
     else{
           cout<<"-1"<<endl;
     }
    }
    else{
     d=a[n-1];
     if(d<b[0])
     {
          cout<<d<<endl;
     }
     else{
           cout<<"-1"<<endl;
     }
    }
}
