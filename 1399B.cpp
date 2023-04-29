#include<bits/stdc++.h>
using namespace std;
int main(){
     long long int t,n,a[10000],b[10000],c,i,d,sum=0;
     cin>>t;
     while(t--){
       cin>>n;
       for(i=0;i<n;i++){
          cin>>a[i];
       }
       for(i=0;i<n;i++){
          cin>>b[i];
       }
     sort(a,a+n);
     sort(b,b+n);
     for(i=0;i<n;i++){
          sum=sum+max(a[i]-a[0],b[i]-b[0]);
     }
     cout<<sum<<endl;
     sum=0;
     }
}

