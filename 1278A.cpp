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
     //cout<<'a'-'a'<<endl;
     cin>>t;
     map<long long int,long long int> mp;
     map<long long int,long long int> mps;
     while(t--){
               bool ok=true;
       string s,h;
       cin>>s>>h;
    long long int p=s.size();
     long long int b=h.size();
      for(i=0;(i+p)<=b;i++){
          string x=h.substr(i,p);
          sort(x.begin(),x.end());
          sort(s.begin(),s.end());
          if(x==s){
               cout<<"Yes\n";
               ok=false;
               break;
          }
      }
      if(ok){
          cout<<"No\n";
      }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




