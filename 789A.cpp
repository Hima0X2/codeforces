#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,n,k,c=0,d=0;
     int a[10000];
    cin>>n>>k;
    for(i=0;i<n;i++){
     cin>>a[i];
    }
    for(i=0;;i++){
     if(a[i]<=k&&a[i]!=0)
     {
          c++;
          if(c==2){
               d++;
               c=0;
          }
     }
     else{
          c++;
          a[i]=a[i]-k;
     }
     if(i==n-1){i=0;}
    }
    cout<<d<<endl;
}
