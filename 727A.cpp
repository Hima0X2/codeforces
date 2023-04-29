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
     bool ok=false;
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,a,b;
     cin>>a>>b;
     vector<long long int> v;
    while(b>=a){
     v.push_back(b);
     if(b%10==1){
          b=b/10;
     }
     else if(b%2==0){
          b=b/2;
     }
     else{
          break;
     }
     if(b==a){
          ok=true;
     }
    }
    if(ok){
     cout<<"YES\n";
     cout<<v.size()<<endl;
     for(i=v.size()-1;i>=0;i--){
          cout<<v[i]<<" ";
     }
     cout<<endl;
    }
    else{
     cout<<"NO\n";
    }
}
/// ALHAMDULILLAH




