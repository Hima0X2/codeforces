#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
long long int n,i;
cin>>n;
for(i=0;i<n;i++){
     cin>>a[i];
}
long long int d=0,c=0,m=0,p=1,ans = 0;
vector<long long int> v;
for(i=1;i<n;i++){
   if(a[i]==a[i-1]){
     p++;
   }
   else{
     v.push_back(p);
     p=1;
   }
}
v.push_back(p);
for(i=1;i<v.size();i++){
     ans=max(ans,min(v[i],v[i-1])*2);
}
cout<<ans<<endl;
}


