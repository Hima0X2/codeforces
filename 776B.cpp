#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];


int main()
{
     optimize();
     memset(a,0,sizeof(a));
     long long int i,n,j;
for(i=4;i<mx;i=i+2){
     a[i]=1;
}
for(i=3;i<sqrt(mx);i=i+2){
     if(a[i]==0){
          for(j=i*i;j<mx;j=j+(i+i)){
               a[j]=1;
          }
     }
}
a[0]=a[1]=1;
cin>>n;
if(n==1||n==2){
     cout<<1<<endl;
}
else{
     cout<<2<<endl;
}
for(i=2;i<=n+1;i++){
     if(a[i]==1){
          cout<<2<<" ";
     }
     else{
          cout<<1<<" ";
     }
}
cout<<endl;
}



