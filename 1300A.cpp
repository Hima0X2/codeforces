#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,c=0,a[100000],sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                c++;
                a[i]++;
            }
            sum=sum+a[i];
        }
        if(sum==0)
        {
            c++;
        }
        cout<<c<<endl;
        c=0;
        sum=0;
    }
}

