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
    long long int t,i,n,k;
    cin>>n>>k;
    int ok=0,c=0,d=0,mn=0;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=0&&mn<a[i])
        {
            if(ok==1)
            {
                if(d+k<i)
                {
                    c=i+1;
                }
            }
            else
            {
                mn=a[i];
                c=i+1;
                ok=1;
            }
        }
        if(a[i]!=0){
          d=i+1;
        }
    }
    if(!ok)
    {
        cout<<"Impossible\n";
    }
    else
    {
        cout<<c<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



