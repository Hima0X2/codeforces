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
    long long int t,i,j,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n+1],b[n+1];
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            b[i]=1;
        }
        for(i=1; i<=n; i++)
        {
            for(j=i*2; j<=n; j=j+i)
            {
                if(a[i]<a[j]){
                   b[j]=max(b[j],b[i]+1);
                }
            }
        }
        long long int ans=0;
         for(i=1; i<=n; i++)
        {
           ans=max(ans,b[i]);
        }
        cout<<ans<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




