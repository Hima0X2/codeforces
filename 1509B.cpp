#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     long long int t,i,n,c,d;
     cin>>t;
    back:
     while(t--){
               c=0;
               d=0;
          cin>>n;
          cin>>s;
          if(n%3!=0){
               cout<<"NO\n";
                    goto back;
          }
          for(i=0;i<n;i++){
               if(s[i]=='T'){
                    c++;
               }
               else{
                    d++;
               }
              if(c<d){
                    cout<<"NO\n";
                    goto back;
               }
               }
               c=0;
               d=0;
                for(i=n-1;i>=0;i--){
               if(s[i]=='T'){
                    c++;
               }
               else{
                    d++;
               }
              if(c<d){
                    cout<<"NO\n";
                    goto back;
               }
               }
               if(2*d!=c){
                    cout<<"NO\n";
               }
               else{
                   cout<<"YES\n";
               }
          }
     }
