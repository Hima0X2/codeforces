#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,l,f=0;
     string s;
     cin>>t;
     while(t--){
          cin>>s;
          l=s.length();
         for(i=1;i<l;i++){
          if(s[i]=='1'&&s[i-1]=='1'){
               break;
          }
         }
          for(i=i+1;i<l;i++){
          if(s[i]=='0'&&s[i-1]=='0'){
                   cout<<"NO\n";
                    f=1;
               break;
          }
         }
         if(f==0)cout<<"YES\n";
         f=0;
     }
}
