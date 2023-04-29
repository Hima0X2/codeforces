#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n;
     string s;
     cin>>n;
     map<string,int> mp;
     map<string,int>:: iterator it;
     while(n--){
          cin>>s;
          if(mp[s]==1){cout<<"YES"<<endl;}
          else{
               cout<<"NO"<<endl;
          }
          mp[s]=1;
     }
}
