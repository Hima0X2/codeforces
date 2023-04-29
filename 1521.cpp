#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long t,a,b,i;
     cin>>t;
     while(t--){
          cin>>a>>b;
          if(b==1){
               cout<<"NO\n";
          }
          else{
               cout<<"YES\n";
               cout<<a<<" "<<(a*b)<<" "<<(b*a)+a<<endl;
          }
     }
}
