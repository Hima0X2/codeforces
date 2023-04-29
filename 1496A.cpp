#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,n,k,l,i,j,z;
   string s;
   cin>>t;
   pas:
   while(t--){
          z=0;
     cin>>n>>k;
     cin>>s;
     if(k==0){
               cout<<"YES\n";
          goto pas;
     }
     l=s.length()-1;
   i=0;
     while (i <l){
          if(s[i]==s[l]){
            z++;
          }
          else{
               break;
          }
          i++;
          l--;
     }
     if(z>=k&&(k*2)+1<=n) cout<<"YES\n";
     else cout<<"NO\n";
   }
}
