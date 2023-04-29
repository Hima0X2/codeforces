#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,a,b,k,i,sum=0,j;
     cin>>t;
     while(t--){
          cin>>a>>b>>k;
          if(k%2==0){
               j=k/2;
               k=k/2;
          }
          else{
               j=(k-1)/2;
               k=k-j;
          }
          sum=a*k-b*j;
          cout<<sum<<endl;
          sum=0;
     }
}
