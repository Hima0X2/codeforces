#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx],b[mx]={0},flag[mx]={0};

int main()
{
     optimize();
long long int t,i,c,j,n;
for(i=1;i<=1000;i++){
     for(j=i;j<=1000;j=j+i){
         a[j]++;
     }
}
for(i=1;i<=1000;i++){
   cout<<a[i]<<" ";
}
cout<<endl;
for(i=1;i<=1000;i++){
     if(flag[i]==0){
        b[a[i]]=i;
        flag[i]=1;
     }
}
for(i=1;i<=1000;i++){
   cout<<b[i]<<endl;
}
cin>>t;
while(t--){
     cin>>n;
     if(b[n]==0){
          cout<<-1<<endl;
     }
     else{
     cout<<b[n]<<endl;
     }
}
}

