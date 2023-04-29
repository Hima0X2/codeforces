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
    long long int t,i,j,n,a,b,c;
    cin>>t;
    while(t--)
    {
        int ok=0,a=0;
        cin>>n;
        for(i=2; i*i<=n; i++)
        {
     if(n%i==0){
            a=n/i;
            for(j=2; j*j<=n&&!ok; j++)
            {
                if(a%j==0&&i!=j&&(a/j)!=j&&(a/j)!=i)
                {
                    cout<<"YES\n";
                    cout<<i<<" "<<j<<" "<<a/j<<endl;
                    ok=1;
                    break;
                }
            }
            }
        }
        if(!ok)
        {
            cout<<"NO\n";
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




