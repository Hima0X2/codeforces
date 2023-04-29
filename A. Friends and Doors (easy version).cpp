/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
const long long int mx = 1e7+123;
long long int a[mx],b[mx];
int main()
{
     long long int t,i,n,k,c=0,j;
     cin>>n>>k;
     for(i=1;i<=mx;i++){
          b[i]=1;
     }
     for(i=1;i<=n;i++){
       cin>>a[i];
     }
    for(i=3;i<=k;i=i+2){
          for(j=i;j<=k;j+=i){
            if(b[j]){
               b[j]=0;
            }
            else{
               b[j]=1;
            }
          }
     }
     for(i=1;i<=n;i++){
       if(b[a[i]]){
          c++;
       }
     }
     cout<<c<<endl;
}
