/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123,mn=1e9;
long long int a[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     while(t--){
               int ok=0;
               vector<long long int> v;
cin>>n;
long long int p=1;
for(i=0;i<n;i++){
     v.push_back(p);
     if(p>=mn){
          ok=1;
          break;
     }
     p=p*3;
}
if(ok){
     cout<<"NO\n";
}
else{
     cout<<"YES\n";
     for(i=0;i<v.size();i++){
          cout<<v[i]<<" ";
     }
     cout<<endl;
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




