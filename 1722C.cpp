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
        cin>>n;
       string a[3][n];
       map<string,int> mp;
        for(i=0;i<3;i++){
          for(j=0;j<n;j++){
               cin>>a[i][j];
               mp[a[i][j]]++;
          }
        }
        for(i=0;i<3;i++){
          long long int ans=0;
          for(j=0;j<n;j++){
               if(mp[a[i][j]]==1){
                    ans=ans+3;
               }
               else if(mp[a[i][j]]==2){
                    ans=ans+1;
               }
          }
          cout<<ans<<" ";
        }
        cout<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




