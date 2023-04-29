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
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
         long long int c,d,p;
        cin>>n;
        if(n==0){
          cout<<0<<endl;
          continue;
        }
        d=15;
        for(i=0;i<=32;i++){
               c=0;
          p=i+n;
            while(p%2==0&&p>0){
              p=p/2;
               c++;
            }
            d=min(d,15LL+i-c);
        }
       cout<<d<<" ";
    }
    cout<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




