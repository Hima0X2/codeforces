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
        long long int p=0,sum=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
       long long int mx = 0, cnt = 0, cnt1 = 0;
        for(i = 0; i < n; i++)
        {
            if(a[i] == 1)
            {
                cnt++;
                cnt1++;
            }
            mx = max(mx, cnt1);
            if(a[i] == 2 && cnt > 0)
            {
                cnt1 = (cnt + 2) / 2;
                mx = max(mx,cnt1);
            }
        }
        cout << mx << endl;
    }
}