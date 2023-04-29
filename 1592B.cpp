/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int t,i,n,x;
     cin>>t;
     while(t--){
               bool ok=true;
               vector<long long int> v;
cin>>n>>x;
for(i=0;i<n;i++){
     cin>>a[i];
     v.push_back(a[i]);
}
sort(v.begin(),v.end());
for(i=n-x;i<x;i++){
     if(a[i]!=v[i]){
          ok=false;
          break;
     }
}
if(ok){
     cout<<"YES\n";
}
else{
     cout<<"NO\n";
}
     }
}
/// ALHAMDULILLAH




