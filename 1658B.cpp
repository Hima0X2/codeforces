/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123,mod=998244353;
long long int f[mx];
int main()
{
     optimize();
     long long int t,i,n;
     f[1]=1;
     for(i=2;i<=1000;i++){
          f[i]=(f[i-1]*i)%mod;
     }
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     cin>>t;
     while(t--){
cin>>n;
if(n&1){
     cout<<0<<endl;
}
else{
     cout<<(f[n/2]*f[n/2])%mod<<endl;
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




