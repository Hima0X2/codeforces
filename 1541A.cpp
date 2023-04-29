#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,n,i;
     cin>>t;
     while(t--){
          cin>>n;
          long long int a[n+1];
          for(i=1;i<=n;i++){
              a[i]=i;
          }
            for(i=1;i<n;i=i+2){
             swap(a[i],a[i+1]);
          }
          if(n%2){
               swap(a[n-1],a[n]);
          }
            for(i=1;i<=n;i++){
            cout<<a[i]<<" ";
          }
          cout<<endl;
     }
}

