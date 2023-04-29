#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx],b[mx];

int main()
{
    optimize();
    long long int t,i,k,m,n,p,q,x;
    cin>>t;
    while(t--)
    {
        bool flag=true;
        p=0;
        q=0;
        vector<long long int> v;
        cin>>k>>n>>m;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<m; i++)
        {
            cin>>b[i];
        }
        while(p<n||q<m)
        {
            if(p<n&&a[p]<=k)
            {
                  v.push_back(a[p]);
                if(a[p]==0)
                {
                    k++;
                }
                p++;
            }
            else if(q<m&&b[q]<=k)
            {
                  v.push_back(b[q]);
                if(b[q]==0)
                {
                    k++;
                }
                q++;
            }
            else
            {
                cout<<-1<<endl;
                flag=false;
                break;
            }
        }
        if(flag)
        {
            for(i=0; i<v.size(); i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}


