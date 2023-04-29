#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx],b[mx];

int main()
{
     optimize();
    long long int t,i,n,sum=0;
    cin>>t;
    while(t--){
          bool flag=false;
          sum=0;
     cin>>n;
     for(i=0;i<n+2;i++){
          cin>>b[i];
     }
     sort(b,b+n+2);
     // for(i=0;i<n+2;i++){
       //  cout<<b[i]<<" ";
     //}
    // cout<<endl;
    long long int j;
    for(j=0;j<=n;j++){
          sum=0;
      for(i=0;i<=n;i++){
          if(i!=j){
               sum=sum+b[i];
          }
     }
     //cout<<sum<<" "<<b[n+1]<<endl;
     if(sum==b[n+1]){
               flag=true;
          for(i=0;i<=n;i++){
               if(i!=j){
          cout<<b[i]<<" ";}
     }
     cout<<endl;
     goto be;
     }
    }
    swap(b[n+1],b[n]);
    for(j=0;j<=n;j++){
          sum=0;
      for(i=0;i<=n;i++){
          if(i!=j){
               sum=sum+b[i];
          }
     }
     //cout<<sum<<" "<<b[n+1]<<endl;
     if(sum==b[n+1]){
               flag=true;
          for(i=0;i<=n;i++){
               if(i!=j){
          cout<<b[i]<<" ";}
     }
     cout<<endl;
     goto be;
     }
    }
    be:
    if(!flag){
     cout<<-1<<endl;
    }
    }
}


