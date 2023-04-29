/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e2+123;
        long long int a[mx][mx];
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,j,i,n,m,r,c;
    cin>>t;
    while(t--)
    {
        long long int p=0;
        bool ok=false;
        cin>>n>>m>>r>>c;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                char ch;
                cin>>ch;
                if(ch=='W')
                {
                    a[i][j]=0;
                }
                else
                {
                    a[i][j]=1;
                    if(i==r-1||j==c-1)
                    {
                        ok=true;
                    }
                }
                p=p+a[i][j];
            }
        }
        if(p==0)
        {
            cout<<-1<<endl;
        }
        else if(a[r-1][c-1]==1)
        {
            cout<<0<<endl;
        }
        else if(ok==true)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




