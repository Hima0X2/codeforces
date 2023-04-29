#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,a,b;
     string s;
     cin>>t;
     while(t--){
          cin>>a>>b;
          cin>>s;
         int x=s.length();
         int r=0,l=0,u=0,d=0;
         for(int i=0;i<x;i++){
          if(s[i]=='R')r++;
          else if(s[i]=='L')l++;
          else if(s[i]=='U')u++;
          else if(s[i]=='D')d++;
         }
         if((a>=0&&r==a)&&(b>=0&&b==u))cout<<"YES\n";
         else if((a<0&&l==abs(a))&&(b<0&&abs(b)==d))cout<<"YES\n";
         else if((a<0&&l==abs(a))&&(b>=0&&b==u))cout<<"YES\n";
         else if((a>=0&&r==a)&&(b<0&&abs(b)==d))cout<<"YES\n";
         else cout<<"NO\n";

     }
}
