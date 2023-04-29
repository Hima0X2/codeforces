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
    long long int t,i,n,p;
    cin>>t;
    while(t--)
    {
        long long int sum=0;
        string s;
        cin>>s;
        cin>>p;
        string x=s;
        sort(x.begin(), x.end());
        reverse(x.begin(), x.end());
        //cout<<x<<endl;
        for(i=0; i<s.size(); i++)
        {
            sum=sum+(s[i]-'a')+1;
        }
        map<char,long long int> mp;
        for(i=0; i<s.size(); i++)
        {
            if(sum>p)
            {
                sum=sum-(x[i]-'a'+1);
                mp[x[i]]++;
            }
        }
        for(i=0; i<s.size(); i++)
        {
            if(mp[s[i]]>0)
            {
                mp[s[i]]--;
                continue;
            }
            cout<<s[i];
        }
        cout<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




