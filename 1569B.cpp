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

int main()
{
    optimize();
    long long int t,i,j,n;
    cin>>t;
    string s;
    while(t--)
    {
        bool ok=true;
        cin>>n;
        cin>>s;
       char a[n][n];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==j)
                {
                    a[i][j]='X';
                }
                else
                {
                    a[i][j]='=';
                }
            }
        }
        for(i=0; i<n; i++)
        {
            if(s[i]=='2')
            {
                 ok=false;
                for(j=0; j<n; j++)
                {
                    if(a[i][j] == '=' && s[j] == '2')
                    {
                        a[i][j]='+';
                        a[j][i]='-';
                        ok=true;
                        break;
                    }
                }
            }
        }
        if(!ok)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    cout<<a[i][j];
                }
                cout<<endl;
            }
        }
    }
}
/// ALHAMDULILLAH




