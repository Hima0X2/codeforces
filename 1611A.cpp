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
    cin>>t;
    while(t--)
    {
        bool ok=false;
        cin>>n;
        if(n%2==0)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            string s=to_string(n);
            if((s[0]-'0')%2==0)
            {
                cout<<1<<endl;
                continue;
            }
            for(i=1; i<s.size(); i++)
            {
                if((s[i]-'0')%2==0)
                {
                    ok=true;
                    cout<<2<<endl;
                    break;
                }
            }
            if(!ok)
            {
                cout<<-1<<endl;
            }
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




