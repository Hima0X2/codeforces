/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,i,n,a,b,c,d,x;
     cin>>t;
     while(t--){
        cin>>a>>b>>c;
        long long int n=2*abs(a-b);
        if(a>n||b>n||c>n) cout << -1 << endl;
        else {
            x = (c+n/2)%n;
            if(x==0){
                    x = n;
            }

            cout << x << endl;
        }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



