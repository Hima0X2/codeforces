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
    long long int t,i,n,l,r,a;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>a;
      long long int mx = r/a+r%a;
       long long int mx1 = (r/a)-1+a-1;
        long long int c = ((r/a)-1)*a+a-1;
        if(c>=l && c<=r)cout <<  max(mx,mx1) << endl;
        else cout << mx<< endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
