#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i;
     bool flag=true;
     string s[1000],p;
     cin>>t;
     for(i=0;i<t;i++){
          cin>>s[i];
     }
    p="blue";
      for(i=0;i<t;i++){
          if(s[i]=="unlock"){
               flag=true;
          }
          else if(s[i]=="lock"){
               flag=false;
          }
          else{
               if(flag){
                    p=s[i];
               }
          }
     }
     cout<<p<<endl;
}

