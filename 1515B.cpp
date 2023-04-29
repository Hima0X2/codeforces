#include<bits/stdc++.h>
using namespace std;
bool fun(int p){
    int x=sqrt(p);
     return p==x*x;
}
int main()
{
   long long int t,i,v,k=0,x,n;
   cin>>t;
   while(t--){
          k=0;
     cin>>n;
    if(n%2==0&&fun(n/2)){
     cout<<"YES\n";
    }
    else if(n%4==0&&fun(n/4)){
     cout<<"YES\n";
    }
    else{
     cout<<"NO\n";
    }
   }
}
