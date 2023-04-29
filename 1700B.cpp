/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,p,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,ans="";
        cin>>s;
        if(s[0]!='9')
        {
            for(i=0; i<n; i++)
            {
                x=s[i]-'0';
                x=9-x;
                char z=(x+'0');
                ans=ans+z;
            }
        }
        else
        {
            int c=0;
            for(i=n-1; i>=0; i--)
            {
                x=s[i]-'0';
                x=x+c;
                if(x>1)
                {
                    x=11-x;
                   char z=(x+'0');
                ans=ans+z;
                    c=1;
                }
                else
                {
                    c=0;
                    x=1-x;
                    char z=(x+'0');
                ans=ans+z;
                }
            }
            reverse(ans.begin(),ans.end());
        }
        cout<<ans<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




