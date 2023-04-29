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
    long long int t=8,i,n,r=0,b=0,j;
    cin>>t;
    while(t--)
    {
         bool ok=false;
        for(j=0; j<8; j++)
        {
             r=0,b=0;
            string s;
            cin>>s;
            for(i=0; i<8; i++)
            {
                if(s[i]=='R')
                {
                    r++;
                }
                else if(s[i]=='B')
                {
                    b++;
                }
            }
            if(r==8){
               ok=true;
            }
            }
            if(ok){
               cout<<"R\n";
            }
            else{
               cout<<"B\n";
            }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




