#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,c=0,e=0;
     string s;
     cin>>t;
     while(t--){
          cin>>s;
          int d=s.length();
          for(int i=0;i<d;i++){
               if(s[i]=='1'){
                    c++;
               }
               else
               {
                    e++;
               }
          }
         // cout<<c<<" "<<d<<endl;
          e=min(c,e);
          //cout<<d<<endl;
          if(e%2==0)
          {
               cout<<"NET"<<endl;
          }
          else{
               cout<<"DA"<<endl;
          }
          c=0;
          e=0;
     }
}
