#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,a,d;
    long long int i,j,k;
     map<long long int,long long int> mp;
     bool flag=0;
     cin>>t;
     for(j=1;j<=10000;j++){
          mp[j*j*j]++;
     }
    while(t--){
               cin>>a;
     for(i=1;i<=10000;i++){
          d=i*i*i;
          if(a>d){
          if(mp[a-d]>=1){
               flag=1;
               break;
          }
          }
     }
     if(flag==1)cout<<"YES\n";
     else cout<<"NO\n";
     flag=0;
}
}
