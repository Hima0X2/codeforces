#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,n,j,a[100];
     cin>>t;
     for(i=0;i<t;i++){
          cin>>n;
          if(n==1)cout<<1<<endl;
          else{
          for(j=1;j<=n;j++){
               a[j]=(n-j+1);
               if(a[j]==j){
               swap(a[j],a[j-1]);
              }}
     for(j=1;j<=n;j++){
              if(j!=n){
               cout<<a[j]<<" ";}
               else{
                    cout<<a[j]<<endl;
               }
          }
          //cout<<endl;
          //j=1;
     }
}
}
