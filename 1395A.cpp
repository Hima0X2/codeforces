/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    long long int t,i,n,r,g,b,w;
    cin>>t;
    while(t--)
    {
        long long int sum;
        cin>>r>>g>>b>>w;
        sum=(r&1)+(g&1)+(b&1)+(w&1);
        if(r==0&&g==0&&b==0&&w==0){
           cout<<"Yes\n";
        }
        else if(sum<=1)
        {
            cout<<"Yes\n";
        }
        else if(r>0&&b>0&&g>0)
        {
            r--;
            g--;
            b--;
            w++;
            sum=(r&1)+(g&1)+(b&1)+(w&1);
            if(sum<=1)
            {
                cout<<"Yes\n";
            }
            else
            {
                cout<<"No\n";
            }
        }
        else
        {
            cout<<"No\n";
        }
    }
}
/// ALHAMDULILLAH




