#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,i,n,c;
cin>>t;
while(t--){
          c=0;
     cin>>n;
     long long int a[20000];
     for(i=0;i<2*n;i++){
          cin>>a[i];
          if(a[i]%2!=0){
               c++;
          }
     }
     //cout<<c<<endl;
     if(c==n){
          cout<<"Yes\n";
     }
     else{
          cout<<"No\n";
     }
}
}

