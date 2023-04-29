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
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
         bool ok=true;
         long long int sum=0,s;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
         for(i=0; i<n; i++)
        {
             s=i*(i+1)/2;
            sum=sum+a[i];
            if(sum<s){
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
}
/// ALHAMDULILLAH




