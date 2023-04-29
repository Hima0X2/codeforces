#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
    optimize();
    long long int t,i,n,j;
    cin>>t;
    while(t--)
    {
        long long int mx1=-10000000,p,k;
        cin>>n>>k;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=max(0LL,n-1000); i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                 p=(i+1)*(j+1)-k*(a[i]|a[j]);
                 //cout<<(a[i]|a[j])<<endl;
                 mx1=max(mx1,p);
                 //cout<<p<<endl;
            }
        }
        cout<<mx1<<endl;


    }
//std::cout << std::fixed << std::setprecision(2);
}


