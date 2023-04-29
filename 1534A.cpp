#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,m,n,i,j,v=0,x=0;
    cin>>t;
    while(t--)
    {
        v=0,x=0;
        cin>>n>>m;
        string s[n];
          for(i=0;i<n;i++)
        {
            cin>>s[i];
        }
      for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if (s[i][j]!='.')
                {
                    if ((i+j)%2!=0)
                    {
                        if (s[i][j]=='W')
                        {
                            v=1;
                          goto hi;
                        }
                    }
                    else
                    {
                        if (s[i][j]=='R')
                        {
                            v=1;
                            goto hi;
                        }

                    }

                }
            }
        }
        hi:
        if (v)
        {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if (s[i][j]!='.')
                {
                    if ((i+j)%2==0)
                    {
                        if (s[i][j]=='W')
                        {
                            x=1;
                           goto bye;
                        }
                    }
                    else
                    {
                        if (s[i][j]=='R')
                        {
                             x=1;
                           goto bye;
                        }

                    }

                }
            }
        }
        bye:
        if (x)
        {
            cout<<"NO\n";
        }
        else
        {cout<<"YES\n";

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if ((i+j)%2==0)
                  {
                       cout<<"R";
                  }
                else{ cout<<"W";}
            }
            cout<<endl;
        }
        }
        }
        else
        {
cout<<"YES\n";
            for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if ((i+j)%2!=0){
                    cout<<"R";
                }
                else {cout<<"W";}
            }
            cout<<endl;
        }
        }
    }
}

