#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,n,i,sum=0,c;
     string s;
     cin>>t;
     while(t--){
          cin>>n;
          cin>>s;
          for(i=n-1;i>=0;i--){
               if(s[i]==')')sum++;
               else
               {
break;
               }
          }
          c=n-sum;
          if(c<sum){
               cout<<"YES"<<endl;
          }
          else{cout<<"NO"<<endl;}
          sum=0;
     }
}
