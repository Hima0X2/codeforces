#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,x,y;
    cin>>n>>m;
    int a[10000],b[1000];
    for(i=0; i<n+1; i++)
    {
        cin>>a[i];
    }
    for(j=0; j<m+1; j++)
    {
        cin>>b[j];
    }
    if((n>m)&&(a[0]<0&&b[0]<0))
    {
        cout<<"Infinity"<<endl;
    }
    else if((n>m)&&(a[0]<0||b[0]<0))
    {
        cout<<"-Infinity"<<endl;
    }
    else if(n>m)
    {
        cout<<"Infinity"<<endl;
    }
    else if(m>n)
    {
        cout<<0<<"/"<<1<<endl;
    }
    else if(n==m)
    {
        x=abs(a[0]);
        y=abs(b[0]);
        int d=__gcd(x,y);
        if(a[0]*b[0]<0)
        {
            a[0]=x/d;
            b[0]=y/d;
            cout<<"-"<<a[0]<<"/"<<b[0]<<endl;
        }
        else
        {
            a[0]=x/d;
            b[0]=y/d;
            cout<<a[0]<<"/"<<b[0]<<endl;
        }


    }
}
