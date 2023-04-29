#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i,j,t,n,c=0;
   string s;
   cin>>t;
   while(t--){
     cin>>n;
     cin>>s;
    if(s[0]=='2'&&s[1]=='0'&&s[n-2]=='2'&&s[n-1]=='0'){
     c=1;
    }
    else if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[3]=='0'){
     c=1;
    }
    else if(s[0]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0'){c=1;}
    else if(s[0]=='2'&&s[1]=='0'&&s[2]=='2'&&s[n-1]=='0'){
     c=1;
    }
    else if(s[n-4]=='2'&&s[n-3]=='0'&&s[n-2]=='2'&&s[n-1]=='0'){
     c=1;
    }
    if(c==1){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    c=0;
     }
   }

