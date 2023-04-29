#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,z,x;
     vector<int> v;
     int k,i,d,p,c=0,j;
     cin>>s>>k;
     d=s.length();
     if(d%k!=0){
          cout<<"NO\n";
     }
     else{
          p=d/k;
          for(i=0;i<d;i++){
               if(s[i]!=s[(i/p) * p + p - 1 - (i % p)]){
                    cout<<"NO\n";
                    return 0;
               }
          }
          cout<<"YES\n";
     }
}
