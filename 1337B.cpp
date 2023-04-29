#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,a,b;
    cin>>t;
    while(t--){
     cin>>n>>a>>b;
     while(n>0&&a!=0&&(n/2)+10<n){
          a--;
          n=(n/2)+10;
     }
     if(n<=b*10){cout<<"YES"<<endl;}
     else{cout<<"NO"<<endl;}
    }
}




