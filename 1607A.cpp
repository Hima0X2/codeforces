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
    long long int i,n,j;
    cin>>n;
    while(n--)
    {
        string s,t;
        cin>>s>>t;
        vector<char> v;
        for(j=0; j<t.size(); j++)
        {
            for(i=0; i<s.size(); i++)
            {
                if(s[i]==t[j])
                {
                   a[j]=i+1;
                   break;
                }
            }
        }
         long long int sum=0;
     for(j=1; j<t.size(); j++)
     {
          sum=sum+abs(a[j]-a[j-1]);
     }
     cout<<sum<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




