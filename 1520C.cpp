#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,sum,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=1;
        long long int s[n+1][n+1];
        if(n==1)
        {
            cout<<1<<endl;
        }
        else if(n==2)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if((i+j)%2==0)
                    {
                        s[i][j]=sum;
                        sum++;
                    }
                }
            }
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    if((i+j)%2!=0)
                    {
                        s[i][j]=sum;
                        sum++;
                    }
                }
            }
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=n; j++)
                {
                    cout<<s[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}

