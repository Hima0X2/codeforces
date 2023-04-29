#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n;
     cin>>t;
     while(t--){
               bool flag= true;
          string s;
          map<char,int> mp;
          cin>>n>>s;
          mp[s[0]]++;
          for(i=1;i<n;i++){
               if(s[i]!=s[i-1]){
                    if(mp[s[i]]){
                         cout<<"NO\n";
                         flag=false;
                         break;
                    }
               }
               mp[s[i]]++;
          }
     if(flag){
           cout<<"YES\n";
     }
     }
}

