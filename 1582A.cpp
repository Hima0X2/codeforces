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
     long long int t,i,n,a,b,c;
     cin>>t;
     while(t--){
cin>>a>>b>>c;
long long int p=a+2*b+3*c;
if(p%2){
     cout<<1<<endl;
}
else{
     cout<<0<<endl;
}
     }
}
/// ALHAMDULILLAH




