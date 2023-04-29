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
long long int v[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,k,j;
     cin>>t;
     while(t--){
               bool ok=1;
cin>>n>>k;
for(i=0;i<n;i++){
     cin>>v[i];
}
if(n==1){
     cout<<(v[0]==k)<<endl;
}
else{
     sort(v,v+n);
i=0;
j=1;
while(i<n&&j<n){
     if(v[i]+abs(k)==v[j]){
          ok=0;
          break;
     }
     else if(v[i]+abs(k)<v[j]){
      i++;
     }
     else{
          j++;
     }
}
if(!ok){
     cout<<"YES\n";
}
else{
     cout<<"NO\n";
}
     }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




