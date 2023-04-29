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
    be:
    while(t--)
    {
         string s;
        cin>>s;
        long long int p=s.size();
        for(i = p - 2; i >= 0; i--)
        {
             long long int z=s[i]-'0'+s[i+1]-'0';
            if(z>=10)
            {
             cout<<s.substr(0,i)<<z<<s.substr(i+2)<<endl;
             goto be;
            }
        }
        cout <<(s[0] - '0' + s[1] - '0')<< s.substr(2) <<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




