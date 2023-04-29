#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
     optimize();
     long long int t,i,a,j;
     cin>>t;
   while(t--){
          cin>>a;
           long long int z=sqrt(a);
        for(i=2;i*i<=z;i++){
          if(z%i==0)break;
        }
        if(i*i>z&&z*z==a&&a>1){
          cout<<"YES\n";
        }
        else{
          cout<<"NO\n";
        }
     }
}
