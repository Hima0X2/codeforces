#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,k,i,x[10000],y[10000],p=1,c=0,j,d=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>x[i]>>y[i];
        }
        for(j=0; j<n; j++)
        {
            if(x[j]!=y[j])
            {
                d++;
                if(k<=0)
                {
                    p=0;
                    cout<<-1<<endl;
                    break;
                }
            }
            else
            {
                 k--;
                c++;
            }
        }
        if(c==n)
        {
            cout<<-1<<endl;
        }
        else if(d<=k)
        {
          cout<<1<<endl;
        }
        p=0;
        d=0;
    }
}

