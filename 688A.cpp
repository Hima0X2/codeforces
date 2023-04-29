#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,n,d,i,ans=0,c=0;
    string s;
    cin>>n>>d;
    for(i=0;i<d;i++){
     cin>>s;
     int z=0;
     for(j=0;j<n;j++){
          if(s[j]=='0'){
               z=1;
               break;
          }
     }
     if(z==1){
          c++;
     }
     else{
          c=0;
     }
     ans=max(ans,c);
    }
    cout<<ans<<endl;
}
