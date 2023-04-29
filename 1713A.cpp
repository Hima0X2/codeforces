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
    long long int t,i,n,x,y;
    cin>>t;
    while(t--)
    {
        long long int mnx=0,mny=0,mxx=0,mxy=0;
        cin>>n;
        cin>>x>>y;
        mnx=x;
        mny=y;
        mxx=x;
        mxy=y;
        for(i=1; i<n; i++)
        {
            cin>>x>>y;
            mnx=min(mnx,x);
            mxx=max(mxx,x);
            mny=min(mny,y);
            mxy=min(mxy,y);
        }
        cout<<2*(mxx+mxy-mnx-mny)<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




