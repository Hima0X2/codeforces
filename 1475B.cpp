#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,n,sum,c=1;
    string s;
    cin>>t;
    while(t--){
     sum=0;
     cin>>n;
     if(n<2020){
          cout<<"NO\n";
     }
     else{
    for(i=0;i<100;i++){
    if((n-2020*i)%2021==0){
          if((n-2020*i)<0){
               break;
          }
          c=0;
      cout<<"YES\n";
    }
    }
    if(c==1){
    cout<<"NO\n";
    }
     }
     c=1;
}
}

