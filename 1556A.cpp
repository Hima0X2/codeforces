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
     long long int t,i,n,a,b,c,d;
     cin>>t;
     while(t--){
    cin>>c>>d;
    a=0,b=0;
     if(c==0&&d==0){
     cout<<0<<endl;
         }
    else if(c==d){
     cout<<1<<endl;
    }
    else if(abs(c-d)%2==0){
      cout<<2<<endl;
    }
    else{
     cout<<-1<<endl;
    }
     }
}
/// ALHAMDULILLAH



