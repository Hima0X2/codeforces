#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n;
     string s;
     cin>>t;
     while(t--){
               int c=0;
          cin>>n;
          cin>>s;
          for(i=0;i<n;i++){
             if(s[i]=='0'){c++;}
          }
     if(c%2&&c!=1){
          cout<<"ALICE\n";
     }
     else{
          cout<<"BOB\n";
     }
     }
}
