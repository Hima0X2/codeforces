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
    long long int t,i,n,q,x,y,p;
    cin>>t;
    while(t--)
    {
        map<long long int,pair<long long int, long long int> > mp;
        cin>>n>>q;
        for(i=0; i<n; i++)
        {
            cin>>p;
            //cout<<mp.count(p);
            if(!mp.count(p)){
               mp[p].first=i;
               mp[p].second=i;
            }
            else{
               mp[p].second=i;
            }
        }
        while(q--)
        {
            cin>>x>>y;
            if(mp.count(x)&&mp.count(y)&&(mp[x].first<=mp[y].second))
            {
                    cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




