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
         bool ok=true;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        string s;
        cin>>s;
        for(i=0;i<n;i++){
          for(j=1;j<n;j++){
               if(a[i]==a[j]){
                    if(s[i]==s[j]){
                         continue;
                    }
                    else{
                         ok=false;
                         break;
                    }
               }
          }
          if(!ok){
               break;
          }
        }
         if(!ok){
               cout<<"NO\n";
          }
          else{
               cout<<"YES\n";
          }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




