#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j,a[10000],sum=0,z=0;
    cin>>t;
    bak:
    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
         for(i=1; i<=n; i++)
        {
            //sum=sum+a[i];
            if(a[i]%2==0)
            {
                cout<<1<<endl;
                cout<<i<<endl;
                goto bak;
            }
        }
        for(i=1; i<=n; i++)
        {
            sum=sum+a[i];
            if(sum%2==0)
            {
                cout<<i<<endl;
                for(j=1; j<=i; j++)
                {
                    cout<<j<<' ';
                }
                goto bak;
            }
            else
            {
                z=1;
            }
        }
if(z==1)cout<<-1<<endl;
        sum=0;
    }
}



