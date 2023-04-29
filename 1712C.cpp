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
    long long int t,i,n,in;
    cin>>t;
    while(t--)
    {
        in=-1;
        cin>>n;
        set<long long int> s;
        map<long long int,long long int> mp;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            if(mp.find(a[i])==mp.end())
            {
                mp[a[i]]=i;
            }
        }
        long long int ans=mp.size();
        for(i=n-1;i>=1;i--)
        {
            if(a[i]<a[i-1])
            {
                in=i-1;
                break;
            }
        }
        if(in==-1)
        {
            cout<<0<<endl;
            continue;
        }
for(i=n-1;i>=in+1;i--){
     if(mp[a[i]]<=in){
          break;
     }
     s.insert(a[i]);
}
cout<<mp.size()-s.size()<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




