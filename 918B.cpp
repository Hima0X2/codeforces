#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,m,i;
     string s,f,t;
     cin>>n>>m;
     map<string,string> mp;
     while(n--){
          cin>>s;
          cin>>t;
          mp[t]=s;
     }
     while(m--){
          cin>>f;
          cin>>t;
          t.pop_back();
          cout<<f<<" "<<t<<"; #"<<mp[t]<<endl;
     }
}
