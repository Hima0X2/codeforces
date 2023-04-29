#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,n,i,k,a[10000],sum=0;
     cin>>t;
     while(t--){
          cin>>n>>k;
          for(i=1;i<=n;i++){
               cin>>a[i];
               sum=sum+a[i];
          }
          if(sum==k)cout<<"YES"<<endl;
          else{
               cout<<"NO"<<endl;
          }
          sum=0;
     }
}
