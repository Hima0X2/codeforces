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
    long long int t,i,n,l,r,k;
    cin>>t;
    while(t--)
    {
        long long int ok=0;
        cin>>l>>r>>k;
        if(l==r)
        {
            if(l==1)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
            continue;
        }
        ok=(r-l)/2;
        if(l%2==1||r%2==1)
        {
            ok++;
        }
        if(ok<=k)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




