#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx],b[mx];

int main()
{
    optimize();
    long long int t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        long long int p=1;
        cin>>n>>k;
        vector<pair<int, int> > v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        for (int i = 1; i < n; i++)
        {
            if (v[i - 1].second + 1 != v[i].second)
            {
                p++;
        }
        }
        if(p<=k)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}


