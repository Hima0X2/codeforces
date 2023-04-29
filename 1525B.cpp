#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,k;
     cin>>t;
     while(t--){
               k=1;
          cin>>n;
          long long int a[n];
          for(i=1;i<=n;i++){
               cin>>a[i];
               if(i!=a[i]){
                    k=0;
               }
          }
          if(k){
               cout<<0<<endl;
          }
          else if(a[1]==1||a[n]==n){
               cout<<1<<endl;
          }
          else if(a[1]==n&&a[n]==1){
               cout<<3<<endl;
          }
          else{
               cout<<2<<endl;
          }
     }
}
