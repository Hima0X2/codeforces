#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int n,t,i;
cin>>t;
while(t--){
          bool flag=true;
          long long int mx=0;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a,a+n);
     for(i=1;i<n;i++){
          if((a[i]-a[i-1])%2){
               cout<<"NO\n";
               flag=false;
               break;
          }
     }
if(flag){
     cout<<"YES\n";
}
}
}


