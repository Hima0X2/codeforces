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
               int ok=0;
cin>>n;
string s1,s2;
cin>>s1;
cin>>s2;
for(i=0;i<n;i++){
     if(s1[i]==s2[i]){
          continue;
     }
     else if((s1[i]=='B'&&s2[i]=='G')||(s2[i]=='B'&&s1[i]=='G')){
          continue;
     }
     else{
          ok=1;
     }
}
if(ok){
     cout<<"NO\n";
}
else{
     cout<<"YES\n";
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




