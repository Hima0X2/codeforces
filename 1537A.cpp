#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long t,i,n;
     cin>>t;
     while(t--){
          double sum=0;
          cin>>n;
          long long int a[n];
          for(i=0;i<n;i++){
               cin>>a[i];
               sum=sum+a[i];
          }
        if(sum==n){
          cout<<0<<endl;
        }
        else if(sum<n){
          cout<<1<<endl;
        }
        else{
          cout<<(sum-n)<<endl;
        }
     }
}

