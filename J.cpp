/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,m,a,k;
    while(1){
          long long int c=0;
          cin>>n>>m>>a>>k;
          if(n==0&&a==0&&m==0&&k==0)
    {
          break;
    }
    while(1){
     if(n==a){
          c++;
          break;
     }
     if(n+m>a+k){
          c++;
          a=a+k;
     }
    }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




