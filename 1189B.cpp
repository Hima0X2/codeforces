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
    cin>>n;
    bool ok=true;
    vector<long long int> v;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    //cout<<a[n-3]<<" "<<a[n-1]<<" "<<a[n-2]<<endl;
    if(a[n-3]+a[n-2]<=a[n-1])
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        cout<<a[n-3]<<" ";
        for(i=0; i<n; i++)
        {
            if(i!=n-3)
            {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




