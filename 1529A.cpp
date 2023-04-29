#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,sum=0;
     cin>>t;
     while(t--){
               long long int mn=100000000;
               int c=0;
          cin>>n;
          long long int a[n];
          for(i=0;i<n;i++){
               cin>>a[i];
               mn=min(mn,a[i]);
          }
        //  cout<<"min"<<mn<<endl;
           for(i=0;i<n;i++){
              if(a[i]==mn){
               c++;
              }
          }
     cout<<n-c<<endl;
     sum=0;
     }
}
