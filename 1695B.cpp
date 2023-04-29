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
        cin>>n;
        char c;
        int mike=INT_MAX,joe=INT_MAX,mi,ji;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        if(n%2==1){
          cout<<"Mike\n";
          continue;
        }
       for(i=1;i<=n;i=i+2){
          if(a[i]<mike){
               mike=a[i];
               mi=i;
          }
          if(a[i+1]<joe){
               joe=a[i+1];
               ji=i+1;
          }
       }
       if(mike==joe){
          if(mi<ji){
               c='j';
          }
          else{
               c='m';
          }
       }
       else if(mike<joe){
          c='j';
       }
       else{
          c='m';
       }
        if(c=='m')
        {
            cout<<"Mike\n";
        }
        else
        {
            cout<<"Joe\n";
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




