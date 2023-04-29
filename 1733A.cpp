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

int main()
{
    optimize();
    long long int t,i,n,k;
    cin>>t;
    while(t--)
    {
        long long int sum=0;
        cin>>n>>k;
        long long int a[n+1];
        memset(a, 0, sizeof(a));
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            a[i%k]=max(a[i%k],a[i]);
        }
        for(i=0;i<k;i++){
          sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




