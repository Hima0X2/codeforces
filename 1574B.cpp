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
     long long int t,i,n,m;
     cin>>t;
     while(t--){
 cin>>a[0]>>a[1]>>a[2]>>m;
 sort(a,a+3);
 long long int p=max(0LL,a[2]-1-a[0]-a[1]);
 if(m<=(a[0]-1)+(a[1]-1)+(a[2]-1)&&m>=p){
     cout<<"YES\n";
 }
 else{
     cout<<"NO\n";
 }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



