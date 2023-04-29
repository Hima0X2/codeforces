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
        long long int x=0,y;
        string s;
        char c;
        bool ok=0;
        cin>>s>>c;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]==c)
            {
                y=s.size()-x-1;
                //cout<<y<<endl;
                if(x%2==0&&y%2==0)
                {
                    cout<<"YES\n";
                    ok=1;
                    break;
                }
                else
                {
                    x++;
                }
            }
            else
            {
                x++;
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




