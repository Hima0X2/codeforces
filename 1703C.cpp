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
    long long int t,i,n,p,j;
    cin>>t;
    while(t--)
    {
        string s;
        long long int x;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            long long int u=0,d=0;
            cin>>x;
            cin>>s;
            for(j=0; j<x; j++)
            {
                if(s[j]=='U')
                {
                    u++;
                }
                else
                {
                    d++;
                }
            }
             //cout<<u<<" "<<d<<endl;
            if(d>u)
            {
                d=d-u;
                p=d%10;
                while(p--)
                {
                    if(a[i]==9)
                    {
                        a[i]=0;
                       // p--;
                    }
                    else
                    {
                        a[i]=a[i]+1;
                    }
                }
            }
            else
            {
                u=u-d;
                p=u%10;
                while(p--)
                {
                    if(a[i]==0)
                    {
                        a[i]=9;
                       // cout<<"h"<<endl;
                       // p--;
                    }
                    else
                    {
                        a[i]=a[i]-1;
                    }
                }
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




