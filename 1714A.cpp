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
long long int h[mx],m[mx];

int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,H,M;
    cin>>t;
    while(t--)
    {
         long long int mn=INT_MAX;
        cin>>n>>H>>M;
        H *= 60;
        H += M;
        for(i=0; i<n; i++)
        {
            cin>>h[i]>>m[i];
            h[i] *= 60;
            h[i] += m[i];
            if(h[i]>=H){
            mn = min(mn, h[i]-H);
            }
            else{
                    mn = min(mn, h[i]+(24*60-H));
            }
        }
        cout<<mn/60<<" "<<mn%60<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




