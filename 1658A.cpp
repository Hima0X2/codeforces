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
               long long int ans=0;
cin>>n;
string s;
cin>>s;
for(i=1;i<s.size();i++){
     if(s[i]==s[i-1]&&s[i]=='0'){
          ans=ans+2;
     }
     else if(s[i-1]==s[i+1]&&s[i]=='1'&&s[i-1]=='0'){
          ans++;
     }
}
cout<<ans<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



