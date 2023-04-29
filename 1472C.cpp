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
    long long int t,i,n,j;
    cin>>t;
    while(t--)
    {
         long long int mx=0,sum=0;
         map<long long int,long long int> mp;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
       for(i=1;i<=n;i++){
               sum=0;
              if(mp[i]==1){
               continue;
              }
              mp[i]=1;
              sum=i+a[i];
              while(sum<=n){
                    if(mp[sum]==1){
                         break;
                    }
                    mp[sum]=1;
               sum=sum+a[sum];
              }
           mx=max(mx,sum-i);
           //cout<<mx<<endl;
       }
       cout<<mx<<endl;
    }
}
/// ALHAMDULILLAH
