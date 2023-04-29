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
        string s,p="";
        cin>>n;
        cin>>s;
        for(i=n-1; i>=0; i--)
        {
            if(s[i]=='0')
            {
                int x=(s[i-1]-'0');
                //cout<<x<<endl;
                i--;
                x=x+(s[i-1]-'0')*10;
                //cout<<x<<endl;
                //cout<<char(14+'a')<<endl;
                p=p+char(x+'a'-1);
                i--;
            }
            else
            {
                p=p+char((s[i]-'0')+'a'-1);
            }
        }
        reverse(p.begin(),p.end());
        cout<<p<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




