#include<bits/stdc++.h>
using namespace std;
int main(){
     int t,n,k;
     cin>>t;
     while(t--){
          cin>>n>>k;
          if(n<k){
               cout<<k-n<<endl;
          }
          else if(n%2==k%2){
               cout<<0<<endl;
          }
          else{
               cout<<1<<endl;
          }
     }
}
