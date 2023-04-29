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
               bool ok=true;
               long long int x=0,y=0;
cin>>n;
for(i=0;i<n;i++){
     cin>>a[i];
}
for(i=0;i<n;i=i+2){
     x=__gcd(x,a[i]);
}
for(i=1;i<n;i=i+2){
     y=__gcd(y,a[i]);
}
//cout<<x<<" "<<y<<endl;
for(i=0;i<n;i=i+2){
    if(a[i]%y==0){
     ok=false;
     break;
    }
}
if(ok){
     cout<<y<<endl;
     continue;
}
ok=true;
for(i=1;i<n;i=i+2){
     if(a[i]%x==0){
     ok=false;
     cout<<0<<endl;
     break;
    }
}
if(ok){
     cout<<x<<endl;
     continue;
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



