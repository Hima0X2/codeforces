#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[100000],i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<n; i++)
        {
            if((a[i]!=a[i-1]))
            {
                if(a[i]==a[i+1])
                {
                    cout<<i<<endl;
                    break;
                }
                else
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
}
