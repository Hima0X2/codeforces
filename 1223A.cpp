#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,t,i;
     cin>>t;
     while(t--){
          cin>>n;
          if(n==2){
               cout<<2<<endl;
          }
          else if(n%2!=0){
               cout<<1<<endl;
          }
          else{
               cout<<0<<endl;
          }
     }
}
