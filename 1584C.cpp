/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx],b[mx];
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
         bool ok=true;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++){
          if(!(a[i]==b[i]||a[i]+1==b[i])){
                    ok=false;
          break;
          }
        }
        if(ok){
          cout<<"YES\n";
        }
        else{
          cout<<"NO\n";
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




