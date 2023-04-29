#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

long long int mx = 1e7+123;

int main()
{
     optimize();
long long int t,i,a,b,ans,c;
cin>>t;
while(t--){
          mx = 1e7+123;
     cin>>a>>b;
     for(i=0;i*i<=a;i++){
          if(b==1&&i==0){
               continue;
          }
          else{
               ans=i;
          }
          c=a;
          while(c){
               c=c/(b+i);
               ans++;
          }
mx=min(ans,mx);
     }
     cout<<mx<<endl;
}
}


