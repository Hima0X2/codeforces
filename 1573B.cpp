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
long long int a[mx],b[mx];

int main()
{
    optimize();
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
        long long int c=0;
        long long int d=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        int ax = *max_element(a,a+n);
        int bx = *max_element(b,b+n);
        for(i=0; i<n; i++)
        {
            if(ax==a[i])
            {
                break;
            }
            else
            {
                c++;

            }
            if(bx==b[i])
            {
                break;
            }
            else
            {
                d++;
            }
        }
       cout<<min(,min(c,d))<<endl;
    }
}
/// ALHAMDULILLAH
