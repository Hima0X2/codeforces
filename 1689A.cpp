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
     long long int t,i,n,j;
     cin>>t;
     while(t--){
cin>>n;
map<long long int,long long int> mp;
for(i=0;i<n;i++){
     cin>>a[i];
     mp[a[i]]=1;
}
for(i=0;i<n;i++){
          int sum=0;
     for(j=0;j<n;j++){
          if(j!=i){
            sum=sum^a[j];
          }
     }
if(mp[sum]==1){
     cout<<sum<<endl;
     break;
}
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




