/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int d[mx];
int main()
{
    optimize();
    long long int t,i,n,a,b,sum=0;
    d[0]=0;
    for(i=1; i<300005; i++)
    {
        sum=sum^i;
        d[i]=sum;
    }
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a==1&&b==1)
        {
            cout<<3<<endl;
        }
        else
        {
            if(d[a-1]==b)
            {
                cout<<a<<endl;
            }
            else if((d[a-1]^b)==a)
            {
                cout<<a+2<<endl;
            }
            else
            {
                cout<<a+1<<endl;
            }
        }
    }
}
/// ALHAMDULILLAH



