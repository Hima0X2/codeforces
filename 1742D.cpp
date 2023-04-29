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
long long int a[mx],b[1001];

int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,j;
    cin>>t;
    while(t--)
    {
         long long int ans=-1;
        cin>>n;
        for(i=0; i<=1000; i++)
        {
            b[i]=0;
        }
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            b[a[i]]=i;
        }
        for(i=1; i<=1000; i++)
        {
            for(j=1; j<=1000; j++)
            {
                if(__gcd(i,j)==1)
                {
                    if(b[i]>0&&b[j]>0)
                    {
                         ans=max(ans,b[i]+b[j]);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




