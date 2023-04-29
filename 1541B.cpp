#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,i,n,j,c=0;
cin>>t;
while(t--){
          c=0;
     cin>>n;
     long long int a[n+1];
     for(i=1;i<=n;i++){
          cin>>a[i];
     }
      for(i=1;i<=n;i++){
          for(j=a[i]-i;j<=n;j=j+a[i]){
                    if(j>0){
         if(a[i]*a[j]==i+j&&i<j){
          c++;
         }
         if(i+j>2*n){
               break;
         }
     }
      }
      }
      cout<<c<<endl;
      }
      }
