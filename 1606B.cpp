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
    long long int t,i,n,k;
    cin>>t;
    while(t--)
    {
        long long int ans=0;
        cin>>n>>k;
//if(k==1){
//     cout<<n-1<<endl;
//     continue;
//}
        long long int p=1;
        while(p<n)
        {
            if(p>k)
            {
                n=n-p;
                ans=ans+(n+k-1)/k;
                p=n;
                break;
            }
            else
            {
                p=p*2;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




