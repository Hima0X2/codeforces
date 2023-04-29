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
        int x=1;
        string p,s;
        map<string,long long int> mp;
        char c1,c2;
        for(c1='a'; c1<='z'; c1++)
        {
            for(c2='a'; c2<='z'; c2++)
            {
                if(c1!=c2)
                {
                    p="";
                    p=p+c1;
                    p=p+c2;
                    mp[p]=x;
                    x++;
                }
            }
        }
        cin>>s;
        cout<<mp[s]<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




