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
               vector<long long int> v;
cin>>n;
for(i=0;i<n;i++){
     cin>>a[i];
     v.push_back(a[i]);
}
if(v.size()==0){
     cout<<0<<endl;
     continue;
}
if(n==1){
     cout<<a[0]<<endl;
     continue;
}
sort(v.begin(),v.end());
long long int mn=INT_MIN;
for(int i=1; i<v.size(); i++){
        mn=max(abs(v[i-1]-v[i]),mn);
    }
cout<<max(v[0],mn)<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
