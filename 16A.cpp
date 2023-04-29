#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,j,m,n;
     string s[10000];
     cin>>n>>m;
     for(i=0;i<n;i++){
     cin>>s[i];
     }
      for(i=0;i<n;i++){
     for(j=1;j<m;j++){
       if(s[i][j]!=s[i][j-1]){
          cout<<"NO\n";
          return 0;
       }
       if(i>0){
       if(s[i][j]==s[i-1][j]){
  cout<<"NO\n";
          return 0;
       }
       }
     }
     }
cout<<"YES\n";
}
