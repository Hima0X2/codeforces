/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     while(t--){
               bool ok=true;
               int r=0,g=0,b=0;
string s;
cin>>s;
for(i=0;i<s.size();i++){
     if(s[i]=='r'){
          r=1;
     }
     else if(s[i]=='g'){
          g=1;
     }
     else if(s[i]=='b'){
          b=1;
     }
     else if(s[i]=='R'){
          if(r==1){
               continue;
          }
          else{
               ok=false;
               break;
          }
     }
      else if(s[i]=='G'){
          if(g==1){
               continue;
          }
          else{
               ok=false;
               break;
          }
     }
      else if(s[i]=='B'){
          if(b==1){
               continue;
          }
          else{
               ok=false;
               break;
          }
     }
}
if(ok){
     cout<<"YES\n";
}
else{
     cout<<"NO\n";
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




