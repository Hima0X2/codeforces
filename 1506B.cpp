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
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int mn=LLONG_MAX;
        cout<<mn<<endl;
        long long int f=1;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            mn=max(mn,a[0]*a[1]*a[2]*a[3]*a[4]);
             mn=max(mn,a[0]*a[1]*a[2]*a[3]*a[n-1]);
             mn=max(mn,a[0]*a[1]*a[2]*a[n-1]*a[n-2]);
             mn=max(mn,a[0]*a[1]*a[n-3]*a[n-1]*a[n-2]);
             mn=max(mn,a[0]*a[n-4]*a[n-3]*a[n-1]*a[n-2]);
              mn=max(mn,a[n-1]*a[n-5]*a[n-2]*a[n-3]*a[n-4]);

        }
        cout<<mn<<endl;
    }
}
/// ALHAMDULILLAH



