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
        string s;
        long long int sum=0,sub;
        cin>>s;
        n=s.size();
        for(i=0; i<n; i++)
        {
            sum=sum+(s[i]-'a'+1);
        }
        if(n%2==0)
        {
            cout<<"Alice "<<sum<<endl;
        }
        else
        {
            if(s[0]<s[n-1])
            {
                sub=s[0]-'a'+1;
            }
            else
            {
                sub=s[n-1]-'a'+1;
            }
            sum=sum-sub;
            if(sum>sub)
            {
                cout<<"Alice "<<sum-sub<<endl;
            }
            else if(sub>sum)
            {
                cout<<"Bob "<<sub-sum<<endl;
            }
            else
            {
                cout<<"Draw 0"<<endl;
            }
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




