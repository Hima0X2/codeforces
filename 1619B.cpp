/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
        set<long long int> s;
        cin>>n;
        for(i=2; i*i<=n; i++)
        {
            s.insert(i*i);
        }
        for(i=2; i*i*i<=n; i++)
        {
            s.insert(i*i*i);
        }
        cout<<s.size()+1<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




