#include <bits/stdc++.h>
using namespace std;
int main()
{
  int d,i,n;
  cin>>n;
  while(n--){
     string s;
     cin>>s;
     for(i=0;i<s.size();i++){
          if(i%2==0){
               s[i]=char(s[i]+1);
               cout<<s[i];
          }
          else{
               s[i]=char(s[i]-1);
               cout<<s[i];
          }
     }
  }
}


